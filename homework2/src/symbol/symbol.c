#include "symbol.h"
#include <stdlib.h>
#include <stdarg.h>
#include "node.h"

// 全局变量声明，声明了一个指向 Table 结构体的指针
pTable table;

pType newType(Class cla,...){
    pType p = (pType)malloc(sizeof(Type));
    assert(p!=NULL);
    p->cla = cla;
    va_list vaList;
    assert(cla == BASIC|| cla==ARRAY || cla==STRUCT|| cla==FUNC);
    switch (cla) {
        case BASIC:
            va_start(vaList, 1);
            p->u.basic = va_arg(vaList,BasicType);
            break;
        case ARRAY:
            va_start(vaList, 2);
            p->u.array.elem = va_arg(vaList, pType);
            p->u.array.size = va_arg(vaList, int);
            break;
        case STRUCT:
            va_start(vaList, 2);
            p->u.structure.structName = va_arg(vaList, char*);
            p->u.structure.field = va_arg(vaList, pFieldList);
        case FUNC:
            va_start(vaList, 3);
            p->u.function.argc = va_arg(vaList, int);
            p->u.function.argv = va_arg(vaList, pFieldList);
            p->u.function.returnType = va_arg(vaList, pType);
            break;
    }
    va_end(vaList);
    return p;
}

pType copyType(pType src) {
    if (src == NULL) return NULL;
    pType p = (pType)malloc(sizeof(Type));
    assert(p != NULL);
    p->cla = src->cla;
    assert(p->cla == BASIC || p->cla == ARRAY || p->cla == STRUCT ||
           p->cla == FUNC);
    switch (p->cla) {
        case BASIC:
            p->u.basic = src->u.basic;
            break;
        case ARRAY:
            p->u.array.elem = copyType(src->u.array.elem);
            p->u.array.size = src->u.array.size;
            break;
        case STRUCTURE:
            p->u.structure.structName = newString(src->u.structure.structName);
            p->u.structure.field = copyFieldList(src->u.structure.field);
            break;
        case FUNC:
            p->u.function.argc = src->u.function.argc;
            p->u.function.argv = copyFieldList(src->u.function.argv);
            p->u.function.returnType = copyType(src->u.function.returnType);
            break;
    }

    return p;
}

void deleteType(pType type) {
    assert(type != NULL);
    assert(type->cla == BASIC || type->cla == ARRAY ||
           type->cla == STRUCT || type->cla == FUNC);
    pFieldList temp = NULL;
    // pFieldList tDelete = NULL;
    switch (type->kind) {
        case BASIC:
            break;
        case ARRAY:
            deleteType(type->u.array.elem);
            type->u.array.elem = NULL;
            break;
        case STRUCT:
            if (type->u.structure.structName)
                free(type->u.structure.structName);
            type->u.structure.structName = NULL;

            temp = type->u.structure.field;
            while (temp) {
                pFieldList tDelete = temp;
                temp = temp->tail;
                deleteFieldList(tDelete);
            }
            type->u.structure.field = NULL;
            break;
        case FUNC:
            deleteType(type->u.function.returnType);
            type->u.function.returnType = NULL;
            temp = type->u.function.argv;
            while (temp) {
                pFieldList tDelete = temp;
                temp = temp->tail;
                deleteFieldList(tDelete);
            }
            type->u.function.argv = NULL;
            break;
    }
    free(type);
}

pFieldList newFieldList(char* newName, pType newType){
    pFieldList p = (pFieldList)malloc(sizeof(FieldList));
    assert(p != NULL);
    p->name = newString(newName);
    p->type = newType;
    p->tail = NULL;
    return p;
}

pFieldList copyFieldList(pFieldList src) {
    assert(src != NULL);
    pFieldList head = NULL, cur = NULL;
    pFieldList temp = src;

    while (temp) {
        if (!head) {
            head = newFieldList(temp->name, copyType(temp->type));
            cur = head;
            temp = temp->tail;
        } else {
            cur->tail = newFieldList(temp->name, copyType(temp->type));
            cur = cur->tail;
            temp = temp->tail;
        }
    }
    return head;
}

void deleteFieldList(pFieldList fieldList) {
    assert(fieldList != NULL);
    if (fieldList->name) {
        free(fieldList->name);
        fieldList->name = NULL;
    }
    if (fieldList->type) deleteType(fieldList->type);
    fieldList->type = NULL;
    free(fieldList);
}

void setFieldListName(pFieldList p, char* newName) {
    assert(p != NULL && newName != NULL);
    if (p->name != NULL) {
        free(p->name);
    }
    p->name = newString(newName);
}

pItem newItem(int symbolDepth, pFieldList pfield){
    pItem p = (pItem) malloc(sizeof (TableItem));
    assert(p!=NULL);
    p->symbolDepth=symbolDepth;
    p->field =pfield;
    p->nextHash=NULL;
    p->nextSymbol=NULL;
    return p;
}

void deleteItem(pItem item) {
    assert(item != NULL);
    if (item->field != NULL) deleteFieldList(item->field);
    free(item);
}

pHash newHash(){
    pHash p = (pHash)malloc(sizeof(HashTable));
    assert(p != NULL);
    p->hashArray = (pItem*)malloc(sizeof(pItem) * HASH_TABLE_SIZE);
    assert(p->hashArray != NULL);
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        p->hashArray[i] = NULL;
    }
    return p;
}

pItem getHashHead(pHash hash,int index){
    assert(hash!=NULL);
    return hash->hashArray[index];
}

void setHashHead(pHash hash,int index,pItem newVal){
    assert(hash!=NULL);
    // 相同hash值的Item依靠指针连接，一个index处只存储头部指针
    hash->hashArray[index] = newVal;
}


pStack newStack() {
    pStack p = (pStack)malloc(sizeof(Stack));
    assert(p != NULL);
    p->stackArray = (pItem*)malloc(sizeof(pItem) * STACK_DEPTH);
    assert(p->stackArray != NULL);
    for (int i = 0; i < STACK_DEPTH; i++) {
        p->stackArray[i] = NULL;
    }
    p->curStackDepth = 0;
    return p;
}

pItem getCurDepthStackHead(pStack stack){
    assert(stack!=NULL);
    return stack->stackArray[stack->curStackDepth];
}

void setCurDepthStackHead(pStack stack, pItem newVal) {
    assert(stack != NULL);
    stack->stackArray[stack->curStackDepth] = newVal;
}

void addStackDepth(pStack stack) {
    assert(stack != NULL);
    stack->curStackDepth++;
}

void minusStackDepth(pStack stack) {
    assert(stack != NULL);
    stack->curStackDepth--;
}

void clearCurDepthStackList(pTable table) {
    assert(table != NULL);
    pStack stack = table->stack;
    pItem temp = getCurDepthStackHead(stack);
    while (temp) {
        pItem tDelete = temp;
        temp = temp->nextSymbol;
        deleteTableItem(table, tDelete);
    }
    setCurDepthStackHead(stack, NULL);
    minusStackDepth(stack);
}

pTable initTable(){
    pTable table = (pTable)malloc(sizeof(Table));
    assert(table != NULL);
    table->hash = newHash();
    table->stack = newStack();
    table->unNamedStructNum = 0;
    return table;
}

void addTableItem(pTable table, pItem item){
    assert(table!=NULL && item!=NULL);
    unsigned hashcode = getHashCode(item->field->name);
    pHash hash = table->hash;
    pStack stack = table->stack;
    // 将新的item加入到这个table中的hash表和stack中
    item->nextSymbol = getCurDepthStackHead(stack);
    setCurDepthStackHead(stack,item);

    item->nextHash = getHashHead(hash,hashcode);
    setHashHead(hash,hashcode,item);
}

// for Debug
void printTable(pTable table) {
    printf("----------------hash_table----------------\n");
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        pItem item = getHashHead(table->hash, i);
        if (item) {
            printf("[%d]", i);
            while (item) {
                printf(" -> name: %s depth: %d\n", item->field->name,
                       item->symbolDepth);
                printf("========FiledList========\n");
                printFieldList(item->field);
                printf("===========End===========\n");
                item = item->nextHash;
            }
            printf("\n");
        }
    }
    printf("-------------------end--------------------\n");
}

pItem searchTableItem(pTable table, char* name) {
    unsigned hashCode = getHashCode(name);
    pItem temp = getHashHead(table->hash, hashCode);
    if (temp == NULL) return NULL;
    while (temp) {
        if (!strcmp(temp->field->name, name)) return temp;
        temp = temp->nextHash;
    }
    return NULL;
}

void deleteTableItem(pTable table,pItem item)
{
    // 谨慎处理删除，避免内存泄露
    assert(table != NULL && item != NULL);
    unsigned hashCode = getHashCode(item->field->name);
    if (item == getHashHead(table->hash, hashCode)){
        // 这里的item->nextHash可以为NULL
        setHashHead(table->hash, hashCode, item->nextHash);
    }else{
        // 检索链表，找到后释放
        pItem cur = getHashHead(table->hash, hashCode);
        pItem last = cur;
        while (cur != item) {
            last = cur;
            cur = cur->nextHash;
        }
        last->nextHash = cur->nextHash;
    }
    deleteItem(item);
}

// Return false -> no confliction, true -> has confliction
boolean checkTableItemConflict(pTable table, pItem item) {
    pItem temp = searchTableItem(table, item->field->name);
    if (temp == NULL) return FALSE;
    while (temp) {
        if (!strcmp(temp->field->name, item->field->name)) {
            if (temp->field->type->cla == STRUCT ||
                item->field->type->cla == STRUCT)
                return TRUE;
            if (temp->symbolDepth == table->stack->curStackDepth) return TRUE;
        }
        temp = temp->nextHash;
    }
    return FALSE;
}

void deleteHash(pHash hash) {
    assert(hash != NULL);
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        pItem temp = hash->hashArray[i];
        while (temp) {
            pItem tdelete = temp;
            temp = temp->nextHash;
            deleteItem(tdelete);
        }
        hash->hashArray[i] = NULL;
    }
    free(hash->hashArray);
    hash->hashArray = NULL;
    free(hash);
}

void deleteStack(pStack stack) {
    assert(stack != NULL);
    free(stack->stackArray);
    stack->stackArray = NULL;
    stack->curStackDepth = 0;
    free(stack);
}

void deleteTable(pTable table){
    deleteHash(table->hash);
    table->hash=NULL;
    deleteStack(table->stack);
    table->stack=NULL;
    free(table);
}
// 先序遍历
void traverseTree(node_ptr node) {
    if (node == NULL) return;

    if (!strcmp(node->name, "ExtDef")) ExtDef(node);

    traverseTree(node->child);
    traverseTree(node->next);
}
/*
 * ExtDef: Specifier ExtDecList SEMI
 *  | Specifier SEMI
 *  | Specifier FunDec CompSt
 *  ;
 * */
void ExtDef(node_ptr node){
    assert(node!=NULL);
    pType specifierType = Sepcifier(node->child);
    char * secondName = node->child->next->name;

    if (!strcmp(secondName, "ExtDecList")) {
        ExtDecList(node->child->next, specifierType);
    }else if(!strcmp(secondName, "FunDec")){
        FunDec(node->child->next, specifierType);
        CompSt(node->child->next->next, specifierType);
    }

    if (specifierType) deleteType(specifierType);
}

void ExtDecList(node_ptr node, pType specifier) {
    assert(node != NULL);
    // ExtDecList -> VarDec
    //             | VarDec COMMA ExtDecList
    node_ptr temp = node;
    while (temp) {
        pItem item = VarDec(temp->child, specifier);
        if (checkTableItemConflict(table, item)) {
            char msg[100] = {0};
            sprintf(msg, "Redefined variable \"%s\".", item->field->name);
            pError(REDEF_VAR, temp->linenum, msg);
            deleteItem(item);
        } else {
            addTableItem(table, item);
        }
        if (temp->child->next) {
            temp = temp->next->next->child;
        } else {
            break;
        }
    }
}

// Specifier -> TYPE
//            | StructSpecifier
pType Specifier(node_ptr node){
    assert(node != NULL);
    node_ptr t = node->child;
    if (!strcmp(t->name, "TYPE")) {
        if (!strcmp(t->val, "float")) {
            return newType(BASIC, FLOAT_TYPE);
        } else {
            return newType(BASIC, INT_TYPE);
        }
    }else{
        return StructSpecifier(t);
    }
}




// StructSpecifier -> STRUCT OptTag LC DefList RC
//                  | STRUCT Tag
// OptTag -> ID | 空
// Tag -> ID
pType StructSpecifier(node_ptr node){
    assert(node!=NULL);
    pType returnType = NULL;
    node_ptr t = node->child->next;
    if (strcmp(t->name, "Tag")) {
        // OptTag

        pItem structItem = newItem(table->stack->curStackDepth, newFieldList("", newType(STRUCT,NULL,NULL)));
        if(!strcmp(t->name,"OptTag")){
            setFieldListName(structItem->field,t->child->val);
            t=t->next;
        }else{
            // 匿名结构体
            table->unNamedStructNum++;
            char structName[20] = {0};
            // sprintf(structName, "%d", table->unNamedStructNum);
            setFieldListName(structItem->field, structName);
        }

        if (!strcmp(t->next->name, "DefList")) {
            DefList(t->next, structItem);
        }

        if (checkTableItemConflict(table,structItem)){
            char msg[100] = {0};
            sprintf(msg, "Duplicated name \"%s\".", structItem->field->name);
            pError(DUPLICATED_NAME, node->linenum, msg);
            deleteItem(structItem);
        }else{
            returnType = newType(STRUCT,newString(structItem->field->name), copyFieldList(structItem->field->type->u.structure.field));
            if (!strcmp(node->child->next->name, "OptTag")) {
                addTableItem(table, structItem);
            }
            else {
                // 匿名结构体
                deleteItem(structItem);
            }
        }


    }else{
        //  StructSpecifier->STRUCT Tag
        // Tag -> ID
        pItem structItem = searchTableItem(table, t->child->val);
        if (structItem==NULL||!isStructDef(structItem)){
            char msg[100] = {0};
            sprintf(msg, "Undefined structure \"%s\".", t->child->val);
            pError(UNDEF_STRUCT, node->linenum, msg);
        }else{
            returnType = newType(
                    STRUCT, newString(structItem->field->name),
                    copyFieldList(structItem->field->type->u.structure.field));
        }
    }
    return returnType;
}
// DefList -> Def DefList
//          | 空
void DefList(node_ptr node, pItem structInfo) {
    // assert(node != NULL);
    while (node) {
        Def(node->child, structInfo);
        node = node->child->next;
    }
}

// Def -> Specifier DecList SEMI
void Def(node_ptr node, pItem structInfo) {
    assert(node != NULL);
    pType dectype = Specifier(node->child);
    //你总会得到一个正确的type，因为语法分析中不能定义Specifier为空
    DecList(node->child->next, dectype, structInfo);
    if (dectype) deleteType(dectype);
}

// DecList -> Dec
//          | Dec COMMA DecList
void DecList(node_ptr node, pType specifier, pItem structInfo) {
    assert(node != NULL);
    node_ptr temp = node;
    while (temp) {
        Dec(temp->child, specifier, structInfo);
        if (temp->child->next)
            temp = temp->child->next->next;
        else
            break;
    }
}

// Dec -> VarDec
//      | VarDec ASSIGNOP Exp
void Dec(node_ptr node, pType specifier, pItem structInfo) {
    assert(node != NULL);
    if (node->child->next == NULL) {
        if (structInfo != NULL) {
            // 结构体内，将VarDec返回的Item中的filedList
            // Copy判断是否重定义，无错则到结构体链表尾 记得delete掉Item
            pItem decitem = VarDec(node->child, specifier);
            pFieldList payload = decitem->field;
            pFieldList structField = structInfo->field->type->u.structure.field;
            pFieldList last = NULL;
            while (structField != NULL) {
                // then we have to check
                if (!strcmp(payload->name, structField->name)) {
                    //出现重定义，报错
                    char msg[100] = {0};
                    sprintf(msg, "Redefined field \"%s\".",
                            decitem->field->name);
                    pError(REDEF_FEILD, node->linenum, msg);
                    deleteItem(decitem);
                    return;
                } else {
                    last = structField;
                    structField = structField->tail;
                }
            }
            //新建一个fieldlist,删除之前的item
            if (last == NULL) {
                // that is good
                structInfo->field->type->u.structure.field =
                        copyFieldList(decitem->field);
            } else {
                last->tail = copyFieldList(decitem->field);
            }
            deleteItem(decitem);
        } else {
            // 非结构体内，判断返回的item有无冲突，无冲突放入表中，有冲突报错delete
            pItem decitem = VarDec(node->child, specifier);
            if (checkTableItemConflict(table, decitem)) {
                //出现冲突，报错
                char msg[100] = {0};
                sprintf(msg, "Redefined variable \"%s\".",
                        decitem->field->name);
                pError(REDEF_VAR, node->linenum, msg);
                deleteItem(decitem);
            } else {
                addTableItem(table, decitem);
            }
        }
    }
        // Dec -> VarDec ASSIGNOP Exp
    else {
        if (structInfo != NULL) {
            // 结构体内不能赋值，报错
            pError(REDEF_FEILD, node->linenum,
                   "Illegal initialize variable in struct.");
        } else {
            // 判断赋值类型是否相符
            //如果成功，注册该符号
            pItem decitem = VarDec(node->child, specifier);
            pType exptype = Exp(node->child->next->next);
            if (checkTableItemConflict(table, decitem)) {
                //出现冲突，报错
                char msg[100] = {0};
                sprintf(msg, "Redefined variable \"%s\".",
                        decitem->field->name);
                pError(REDEF_VAR, node->linenum, msg);
                deleteItem(decitem);
            }
            if (!checkType(decitem->field->type, exptype)) {
                //类型不相符
                //报错
                pError(TYPE_MISMATCH_ASSIGN, node->linenum,
                       "Type mismatchedfor assignment.");
                deleteItem(decitem);
            }
            if (decitem->field->type && decitem->field->type->kind == ARRAY) {
                //报错，对非basic类型赋值
                pError(TYPE_MISMATCH_ASSIGN, node->linenum,
                       "Illegal initialize variable.");
                deleteItem(decitem);
            } else {
                addTableItem(table, decitem);
            }
            // exp不出意外应该返回一个无用的type，删除
            if (exptype) deleteType(exptype);
        }
    }
}
// VarDec -> ID
//         | VarDec LB INT RB
pItem VarDec(node_ptr node,pType specifier){
    assert(node != NULL);
    node_ptr id = node;
    while (id->child) id = id->child;
    pItem p = newItem(table->stack->curStackDepth, newFieldList(id->val, NULL));

    // vardec -> id
    if (!strcmp(node->child->name, "ID")) {
        // printf("copy type tp %s.\n", node->child->val);
        p->field->type = copyType(specifier);
    }else{
        node_ptr varDec = node->child;
        pType temp = specifier;
        while (varDec->next) {
            p->field->type = newType(ARRAY, copyType(temp), atoi(varDec->next->next->val));
            temp = p->field->type;
            varDec = varDec->child;
        }
    }
    return p;
}

// FunDec -> ID LP VarList RP
//         | ID LP RP
void FunDec(node_ptr node,pType returnType){
    assert(node!=NULL);
    pItem p =
            newItem(table->stack->curStackDepth,
                    newFieldList(node->child->val,
                                 newType(FUNC, 0, NULL, copyType(returnType))));
    if (!strcmp(node->child->next->next->name, "VarList")) {
        VarList(node->child->next->next, p);
    }
    if (checkTableItemConflict(table, p)) {
        char msg[100] = {0};
        sprintf(msg, "Redefined function \"%s\".", p->field->name);
        pError(REDEF_FUNC, node->linenum, msg);
        deleteItem(p);
        p = NULL;
    } else {
        addTableItem(table, p);
    }
}

// VarList -> ParamDec COMMA VarList
//          | ParamDec
void VarList(node_ptr node,pItem func){
    assert(node != NULL);
    addStackDepth(table->stack);
    int argc = 0;
    node_ptr temp = node->child;
    pFieldList cur = NULL;

    // VarList -> ParamDec
    pFieldList paramDec = ParamDec(temp);
    func->field->type->u.func.argv = copyFieldList(paramDec);
    cur = func->field->type->u.func.argv;
    argc++;

    // VarList -> ParamDec COMMA VarList
    while (temp->next) {
        temp = temp->next->next->child;
        paramDec = ParamDec(temp);
        if (paramDec) {
            cur->tail = copyFieldList(paramDec);
            cur = cur->tail;
            argc++;
        }
    }
    func->field->type->u.func.argc = argc;
    minusStackDepth(table->stack);
}

// ParamDec -> Specifier VarDec
pFieldList ParamDec(node_ptr node){
    assert(node != NULL);
    pType specifierType = Specifier(node->child);
    pItem p = VarDec(node->child->next, specifierType);
    if (specifierType) deleteType(specifierType);
    if (checkTableItemConflict(table, p)){
        char msg[100] = {0};
        sprintf(msg, "Redefined variable \"%s\".", p->field->name);
        pError(REDEF_VAR, node->linenum, msg);
        deleteItem(p);
        return NULL;
    }else {
        addTableItem(table, p);
        return p->field;
    }
}

// CompSt -> LC DefList StmtList RC
// DefList可为空
void CompSt(node_ptr node,pType returnType){
    assert(node != NULL);
    addStackDepth(table->stack);
    node_ptr temp = node->child->next;
    if (!strcmp(temp->name, "DefList")) {
        DefList(temp, NULL);
        temp = temp->next;
    }
    if (!strcmp(temp->name, "StmtList")) {
        StmtList(temp, returnType);
    }
    clearCurDepthStackList(table);
}
// assert(node != NULL);
// StmtList -> Stmt StmtList
//           | 空
void StmtList(node_ptr node,pType returnType){
    while (node) {
        Stmt(node->child, returnType);
        node = node->child->next;
    }
}


// Stmt -> Exp SEMI
//       | CompSt
//       | RETURN Exp SEMI
//       | IF LP Exp RP Stmt
//       | IF LP Exp RP Stmt ELSE Stmt
//       | WHILE LP Exp RP Stmt
void Stmt(node_ptr node,pType returnType){
    assert(node!=NULL);
    pType expType = NULL;
    if (!strcmp(node->child->name, "Exp")) expType = Exp(node->child);
    else if (!strcmp(node->child->name, "CompSt")) CompSt(node->child, returnType);
    else if (!strcmp(node->child->name, "RETURN"))
    {
        expType = Exp(node->child->next);

        if (!checkType(returnType,expType)){
            pError(TYPE_MISMATCH_RETURN, node->linenum,"Type mismatched for return.");
        }
    }
    else if (!strcmp(node->child->name, "IF")){
        node_ptr stmt = node->child->next->next->next->next;
        expType = Exp(node->child->next->next);
        Stmt(stmt, returnType);
        if (stmt->next != NULL) Stmt(stmt->next->next, returnType);
    }
    else if (!strcmp(node->child->name, "WHILE")) {
        expType = Exp(node->child->next->next);
        Stmt(node->child->next->next->next->next, returnType);
    }

    if (expType) deleteType(expType);
}

// Exp -> Exp ASSIGNOP Exp
//      | Exp AND Exp
//      | Exp OR Exp
//      | Exp RELOP Exp
//      | Exp PLUS Exp
//      | Exp MINUS Exp
//      | Exp STAR Exp
//      | Exp DIV Exp
//      | LP Exp RP
//      | MINUS Exp
//      | NOT Exp
//      | ID LP Args RP
//      | ID LP RP
//      | Exp LB Exp RB
//      | Exp DOT ID
//      | ID
//      | INT
//      | FLOAT
pType Exp(node_ptr node){
    assert(node != NULL);
    node_ptr t = node->child;
    if (!strcmp(t->name, "Exp")) {
        if (strcmp(t->next->name, "LB") && strcmp(t->next->name, "DOT")) {
            pType p1 = Exp(t);
            pType p2 = Exp(t->next->next);
            pType returnType = NULL;
            if (!strcmp(t->next->name, "ASSIGNOP")){
                node_ptr tchild = t->child;

                if (!strcmp(tchild->name, "FLOAT") || !strcmp(tchild->name, "INT")){
                    // 是float或者int，不是变量
                    pError(LEFT_VAR_ASSIGN, t->linenum,"The left-hand side of an assignment must be "
                           "avariable.");
                }else if (!strcmp(tchild->name, "ID")||!strcmp(tchild->next->name, "LB") ||!strcmp(tchild->next->name, "DOT"))){
                    // 是变量
                }
            }
        }
    }
}





