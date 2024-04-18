#ifndef __NODE__
#define __NODE__

enum TYPE{
    INT_TOKEN,
    OCTAL_TOKEN,
    FLOAT_TOKEN,
    HEXNUM_TOKEN,
    ID_TOKEN,
    TYPE_TOKEN,
    CAN_NO_VAL,
    NOTTOKEN,
    INC_FILE
};

struct node{
    int linenum;
    enum TYPE type;
    char * name;
    char * val;
    struct node * child;
    struct node * next;
};
typedef struct node* node_ptr;
node_ptr new_token_node(int linenum,enum TYPE type,char* name,char *val);
node_ptr new_node(int linenum,enum TYPE type,char* name,int argc,...);
void delete_node(node_ptr node);
void printTree(node_ptr node,int deepth);
#endif