#ifndef _rb_tree
// 红黑树节点的定义
#define RED             1
#define BLACK           2

typedef int KEYTYPE;

typedef struct _rbtree_node{
    unsigned char color;
    struct _rbtree_node *right;
    struct _rbtree_node *left;
    struct _rbtree_node *parent;
    KEYTYPE key;
    void *value;
} rbtree_node;



#define _rb_tree
#endif