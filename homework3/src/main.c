#include "total.h"
extern node_ptr root;
extern int yylineno;
extern int yyparse();
extern void yyrestart(FILE*);

unsigned int LexError=0;
unsigned int SynError=0;


int main(int argc,char** argv){

    if (argc <= 1) {
        yyparse();
        return 1;
    }
    FILE* fr = fopen(argv[1], "r");
    if (!fr) {
        perror(argv[1]);
        return 1;
    }

    FILE* fw = fopen(argv[2], "wt+");
    if (!fw) {
        perror(argv[2]);
        return 1;
    }

    //while(yylex()!=0);
    yyrestart(fr);
    yyparse();
    if(!LexError && !SynError){
        printTree(root,0);
        table = initTable();

        traverseTree(root);
        printTable(table);

        interCodeList = newInterCodeList();

        genInterCodes(root);
               if (!interError){
                   printInterCode(fw,interCodeList);
               }

        deleteTable(table);
    }
    // free mem
    delete_node(root);
    return 0;
}
