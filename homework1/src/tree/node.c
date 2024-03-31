#include <stdio.h>
#include "node.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

node_ptr new_token_node(int linenum,enum TYPE type,char* name,char *val){
    node_ptr token_node = (node_ptr)malloc(sizeof(struct node));
    // take handle of this token node
    int name_length = strlen(name)+1;
    int val_length = strlen(val)+1;
    token_node->linenum = linenum;
    token_node->type = type;
    token_node->name = (char*)malloc(sizeof(char)*name_length);
    token_node->val  = (char*)malloc(sizeof(char)*val_length);
    strncpy(token_node->name,name,name_length);
    strncpy(token_node->val,val,val_length);
    token_node->child = NULL;
    token_node->next = NULL;
    return token_node;
}

node_ptr new_node(int linenum,enum TYPE type,char* name,int argc,...){
    node_ptr node = (node_ptr)malloc(sizeof(struct node));
    // take handle of this node, not token
    int name_length = strlen(name)+1;
    node->name = (char*)malloc(sizeof(char)*name_length);
    strncpy(node->name,name,name_length);
    node->linenum = linenum;
    node->type = type;

    va_list valist;
    va_start(valist,argc);

    node_ptr temp_node = va_arg(valist,node_ptr);
    // create tree
    node -> child = temp_node;
    for (int i = 1;i<argc;i++){
        temp_node->next = va_arg(valist,node_ptr);
        if(temp_node->next != NULL){
            temp_node = temp_node->next;
        }
    }
    va_end(valist);

    return node;
}

void delete_node(node_ptr node){
    if (node == NULL){return;}
    while (node->child!=NULL)
    {
        node_ptr temp = node->child;
        node->child = node->child->next;
        delete_node(temp);
    }
    free(node->name);
    free(node->val);
    free(node);
    node->name =NULL;
    node->val=NULL;
    node= NULL;
}

void printTree(node_ptr node,int deepth){
    if(node == NULL){return;}

    for(int i=0;i<deepth;i++){
        printf("    ");
    }

    printf("%s",node->name);
    if(node->type==NOTTOKEN){
        printf(" (%d)",node->linenum);
    }else if(node->type==TYPE_TOKEN){
        printf(": %s",node->val);
    }else if (node->type==ID_TOKEN||node->type==INT_TOKEN){
        printf(": %s",node->val);
    }else if(node->type==FLOAT_TOKEN){
        printf(": %1f",atof(node->val));
    }
    printf("\n");
    printTree(node->child,deepth+1);
    printTree(node->next,deepth);
}