#ifndef __SYMBOL__
#define __SYMBOL__
#define HASH_TABLE_SIZE 0x3fff
#define STACK_DEPTH    0x3fff
#include "../tree/node.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../tree/node.h"
#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>


typedef enum _errorType {
    UNDEF_VAR = 1,         // Undefined Variable
    UNDEF_FUNC,            // Undefined Function
    REDEF_VAR,             // Redefined Variable
    REDEF_FUNC,            // Redefined Function
    TYPE_MISMATCH_ASSIGN,  // Type mismatchedfor assignment.
    LEFT_VAR_ASSIGN,  // The left-hand side of an assignment must be a variable.
    TYPE_MISMATCH_OP,      // Type mismatched for operands.
    TYPE_MISMATCH_RETURN,  // Type mismatched for return.
    FUNC_AGRC_MISMATCH,    // Function is not applicable for arguments
    NOT_A_ARRAY,           // Variable is not a Array
    NOT_A_FUNC,            // Variable is not a Function
    NOT_A_INT,             // Variable is not a Integer
    ILLEGAL_USE_DOT,       // Illegal use of "."
    NONEXISTFIELD,         // Non-existentfield
    REDEF_FEILD,           // Redefined field
    DUPLICATED_NAME,       // Duplicated name
    UNDEF_STRUCT           // Undefined structure
} ErrorType;

typedef enum _class{BASIC,ARRAY,STRUCT,FUNC} Class;
typedef enum _basicType { INT_TYPE, FLOAT_TYPE } BasicType;
typedef struct type* pType;
typedef struct fieldList* pFieldList;
typedef struct tableItem* pItem;
typedef struct type{
    Class cla;
    union{
        // 基本类型
        BasicType basic;
        // 数组类型
        struct {
            pType elem;
            int size;
        }array;
        // 结构体类型
        struct {
            char *structName;
            pFieldList field;
        } structure;
        // 函数类型
        struct {
            int argc;
            pFieldList argv;
            pType returnType;
        } func;
    } u;
}Type;

typedef struct fieldList {
    char* name;       // 域的名字
    pType type;       // 域的类型
    pFieldList tail;  // 下一个域
} FieldList;


typedef struct tableItem {
    int symbolDepth;    // 符号的深度，即在符号表中的作用域深度。
    pFieldList field;   // 表示该符号对应的域。
    pItem nextSymbol;  // 指向同一深度下一个符号的指针，用于构成栈结构，表示从符号表的栈中连接到下一个符号。
    pItem nextHash;    // 指向哈希表中同一哈希值下一个符号的指针，用于构成哈希链表，表示从哈希表中连接到下一个符号。
} TableItem;

typedef struct hashTable {
    pItem* hashArray;   // 用于存储哈希表中的项
} HashTable;

typedef struct stack {
    pItem* stackArray;  // 用于存储栈中的项
    int curStackDepth;  // 表示当前栈的深度
} Stack;

typedef struct hashTable* pHash;
typedef struct stack* pStack;
typedef struct table* pTable;

typedef struct table {
    pHash hash;
    pStack stack;
    int unNamedStructNum;   // 表示未命名结构的数量
} Table;

extern pTable table;


bool isStructDef(pItem src);

pType newType(Class cla,...);
void printType(pType type);
pType copyType(pType src);
void deleteType(pType type);
pFieldList newFieldList(char* newName, pType newType);
void printFieldList(pFieldList fieldList);
pFieldList copyFieldList(pFieldList src);
void deleteFieldList(pFieldList fieldList);
void setFieldListName(pFieldList p, char* newName);
pItem newItem(int symbolDepth, pFieldList pfield);
void deleteItem(pItem item);
pHash newHash();
pItem getHashHead(pHash hash,int index);
void setHashHead(pHash hash,int index,pItem newVal);
pStack newStack();
pItem getCurDepthStackHead(pStack stack);
void setCurDepthStackHead(pStack stack, pItem newVal);
void addStackDepth(pStack stack);
void minusStackDepth(pStack stack);
void clearCurDepthStackList(pTable table);
pTable initTable();
void addTableItem(pTable table, pItem item);
void printTable(pTable table);
pItem searchTableItem(pTable table, char* name);
void deleteTableItem(pTable table, pItem item);
bool checkTableItemConflict(pTable table, pItem item);
bool checkType(pType type1, pType type2);
void deleteHash(pHash hash);
void deleteStack(pStack stack);
void deleteTable(pTable table);
void traverseTree(node_ptr node);

static inline unsigned int getHashCode(char* name) {
    unsigned int val = 0, i;
    for (; *name; ++name) {
        val = (val << 2) + *name;
        if ((i = val & ~HASH_TABLE_SIZE))
            val = (val ^ (i >> 12)) & HASH_TABLE_SIZE;
    }
    return val;
}

static inline void pError(ErrorType type, int line, char* msg) {
    printf("Error type %d at Line %d: %s\n", type, line, msg);
}

static inline char* newString(char* src) {
    if (src == NULL) return NULL;
    int length = strlen(src) + 1;
    char* p = (char*)malloc(sizeof(char) * length);
    assert(p != NULL);
    strncpy(p, src, length);
    return p;
}

void ExtDef(node_ptr node);
void ExtDecList(node_ptr node, pType specifier);
pType Specifier(node_ptr node);
pType StructSpecifier(node_ptr node);
void DefList(node_ptr node, pItem structInfo);
void Def(node_ptr node, pItem structInfo);
void DecList(node_ptr node, pType specifier, pItem structInfo);
void Dec(node_ptr node, pType specifier, pItem structInfo);
pItem VarDec(node_ptr node,pType specifier);
void FunDec(node_ptr node,pType returnType);
void VarList(node_ptr node,pItem func);
pFieldList ParamDec(node_ptr node);
void CompSt(node_ptr node,pType returnType);
void StmtList(node_ptr node,pType returnType);
void Stmt(node_ptr node,pType returnType);
pType Exp(node_ptr node);
void Args(node_ptr node,pItem funcInfo);

#endif