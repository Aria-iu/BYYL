#ifndef __SYMBOL__
#define __SYMBOL__
#define HASH_TABLE_SIZE 0x3fff
#define STACK_DEPTH    0x3fff
#include "node.h"

typedef enum _class{BASIC,ARRAY,STRUCT,FUNC} Class;
typedef enum _basicType { INT_TYPE, FLOAT_TYPE } BasicType;
typedef struct type* pType;
typedef struct fieldList* pFieldList;
typedef struct type{
    Class cla;
    union{
        // 基本类型
        BasicType basic;
        // 数组类型
        struct {
            pType elem,
            int size,
        }array;
        // 结构体类型
        struct {
            char *structName,
            pFiledList filed,
        } structure;
        // 函数类型
        struct {
            int argc;
            pFiledList argv;
            pType returnType;
        } func;
    } u;
}Type;

typedef struct fieldList {
    char* name;       // 域的名字
    pType type;       // 域的类型
    pFieldList tail;  // 下一个域
} FieldList;

typedef struct tableItem* pItem;
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



pType newType(Class cla,...);

pFieldList newFieldList(char* newName, pType newType);

pItem newItem(int symbolDepth, pFieldList pfield);

pHash newHash();

pStack newStack();

pTable initTable();
void addTableItem(pTable table, pItem item);
void deleteTableItem(pTable table, pItem item);

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


void traverseTree(pNode node);


#endif