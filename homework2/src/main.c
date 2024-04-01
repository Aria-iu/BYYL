#include <stdio.h>
#include "./tree/node.h"
extern FILE* yyin;
extern node_ptr root;
extern int yylineno;
extern int yyparse();
extern void yyrestart(FILE*);

unsigned int LexError=0;
unsigned int SynError=0;

int main(int argc,char** argv){
    if(argc>1){
        if(!(yyin=fopen(argv[1],"r"))){
            printf("error in open file");
            perror(argv[1]);
        }
    }
    //while(yylex()!=0);
    yyrestart(yyin);
    yyparse();
    if(!LexError && !SynError){
        printTree(root,0);
    }
    
    // free mem
    delete_node(root);
    return 0;
}