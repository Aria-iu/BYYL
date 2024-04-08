%{
    #include <stdio.h>
    #include "src/lex.c"
    #include "./src/tree/node.h"
    node_ptr root;
    extern int SynError;
    #define YYERROR_VERBOSE 1
%}

// self_defined type can be used
%union{
    struct node* pnode;
}

%token <pnode> INT
%token <pnode> FLOAT
%token <pnode> ID
%token <pnode> SEMI
%token <pnode> COMMA
%token <pnode> ASSIGN
%token <pnode> RELOP
%token <pnode> PLUS
%token <pnode> MINUS
%token <pnode> STAR
%token <pnode> DIV
%token <pnode> PERCENT
%token <pnode> AND
%token <pnode> OR
%token <pnode> NOT
%token <pnode> DOT
%token <pnode> TYPE
%token <pnode> LP
%token <pnode> RP
%token <pnode> LB
%token <pnode> RB
%token <pnode> LC
%token <pnode> RC
%token <pnode> STRUCT
%token <pnode> RETURN
%token <pnode> IF
%token <pnode> ELSE
%token <pnode> WHILE
%token <pnode> OCTAL
%token <pnode> HEXNUM
%token <pnode> JINGHAO
%token <pnode> INCLUDE
%token <pnode> INCFILE


%type <pnode> Program
%type <pnode> ExtDefList
%type <pnode> ExtDef
%type <pnode> Specifier
%type <pnode> ExtDecList
%type <pnode> FunDec
%type <pnode> CompSt
%type <pnode> VarDec
%type <pnode> StructSpecifier
%type <pnode> OptTag
%type <pnode> DefList
%type <pnode> Tag
%type <pnode> VarList
%type <pnode> ParamDec
%type <pnode> StmtList
%type <pnode> Stmt
%type <pnode> Exp
%type <pnode> Def
%type <pnode> DecList
%type <pnode> Dec
%type <pnode> Args
%type <pnode> INCEXPR
%type <pnode> GLOBALINIT


%right ASSIGN
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right NOT
%left DOT
%left LB RB
%left LP RP
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%
// High-level Definations
Program: ExtDefList                 {$$=new_node(@$.first_line,NOTTOKEN,"Program",1,$1);root=$$;}
    ;
ExtDefList: ExtDef ExtDefList       {$$=new_node(@$.first_line,NOTTOKEN,"ExtDefList",2,$1,$2);}
    | INCEXPR ExtDef ExtDefList     {$$=new_node(@$.first_line,NOTTOKEN,"ExtDefList",3,$1,$2,$3);}
    | INCEXPR GLOBALINIT ExtDef ExtDefList {$$=new_node(@$.first_line,NOTTOKEN,"ExtDefList",4,$1,$2,$3,$4);}
    | GLOBALINIT                    {$$=new_node(@$.first_line,NOTTOKEN,"ExtDefList",1,$1);}
    | GLOBALINIT ExtDef ExtDefList  {$$=new_node(@$.first_line,NOTTOKEN,"ExtDefList",3,$1,$2,$3);}
    |                               {$$=NULL;}
    ;

GLOBALINIT: Specifier Exp  SEMI     {$$=new_node(@$.first_line,NOTTOKEN,"GLOBALINIT",3,$1,$2,$3);}
    |                               {$$=NULL;}
    ; 

INCEXPR: JINGHAO INCLUDE INCFILE    {$$=new_node(@$.first_line,NOTTOKEN,"INCEXPR",3,$1,$2,$3);}
    |                               {$$=NULL;}
    ;
ExtDef: Specifier ExtDecList SEMI   {$$=new_node(@$.first_line,NOTTOKEN,"ExtDef",3,$1,$2,$3);}
    | Specifier SEMI                {$$=new_node(@$.first_line,NOTTOKEN,"ExtDef",2,$1,$2);}
    | Specifier FunDec CompSt       {$$=new_node(@$.first_line,NOTTOKEN,"ExtDef",3,$1,$2,$3);}
    ;
ExtDecList: VarDec                  {$$=new_node(@$.first_line,NOTTOKEN,"ExtDecList",1,$1);}
    | VarDec COMMA ExtDecList       {$$=new_node(@$.first_line,NOTTOKEN,"ExtDecList",3,$1,$2,$3);}
    ;

// Specifiers
Specifier: TYPE                     {$$=new_node(@$.first_line,NOTTOKEN,"Specifier",1,$1);}
    | StructSpecifier               {$$=new_node(@$.first_line,NOTTOKEN,"Specifier",1,$1);}
    ;
StructSpecifier: STRUCT OptTag LC DefList RC {$$=new_node(@$.first_line,NOTTOKEN,"StructSpecifier",5,$1,$2,$3,$4,$5);}
    | STRUCT Tag                    {$$=new_node(@$.first_line,NOTTOKEN,"StructSpecifier",2,$1,$2);}
    ;
OptTag: ID                          {$$=new_node(@$.first_line,NOTTOKEN,"OptTag",1,$1);}
    |                               {$$=NULL;}
    ;
Tag: ID                             {$$=new_node(@$.first_line,NOTTOKEN,"Tag",1,$1);}
    ;

// Declarators
VarDec: ID                          {$$=new_node(@$.first_line,NOTTOKEN,"VarDec",1,$1);}
    | VarDec LB INT RB              {$$=new_node(@$.first_line,NOTTOKEN,"VarDec",4,$1,$2,$3,$4);}
    | VarDec LB Exp RB              {$$=new_node(@$.first_line,NOTTOKEN,"VarDec",4,$1,$2,$3,$4);}
    | error RB                      {SynError=1;fprintf(stderr,"Error type B at line %d: Missing \"]\".\n", yylineno);}
    ;
FunDec: ID LP VarList RP            {$$=new_node(@$.first_line,NOTTOKEN,"FunDec",4,$1,$2,$3,$4);}
    | ID LP RP                      {$$=new_node(@$.first_line,NOTTOKEN,"FunDec",3,$1,$2,$3);}
    ;
VarList: ParamDec COMMA VarList     {$$=new_node(@$.first_line,NOTTOKEN,"VarList",3,$1,$2,$3);}
    | ParamDec                      {$$=new_node(@$.first_line,NOTTOKEN,"VarList",1,$1);}
    ;
ParamDec: Specifier VarDec          {$$=new_node(@$.first_line,NOTTOKEN,"ParamDec",2,$1,$2);}
    ;

// Statements
CompSt: LC DefList StmtList RC      {$$=new_node(@$.first_line,NOTTOKEN,"CompSt",4,$1,$2,$3,$4);}
    ;
StmtList: Stmt StmtList             {$$=new_node(@$.first_line,NOTTOKEN,"StmtList",2,$1,$2);}
    |                               {$$=NULL;}
    ;
Stmt: Exp SEMI                      {$$=new_node(@$.first_line,NOTTOKEN,"Stmt",2,$1,$2);}
    | CompSt                        {$$=new_node(@$.first_line,NOTTOKEN,"Stmt",1,$1);}
    | RETURN Exp SEMI               {$$=new_node(@$.first_line,NOTTOKEN,"Stmt",3,$1,$2,$3);}
    | IF LP Exp RP Exp ELSE Stmt    {SynError=1;fprintf(stderr,"Error type B at line %d: Missing \";\"\n", yylineno);}
    | IF LP Exp RP Stmt             {$$=new_node(@$.first_line,NOTTOKEN,"Stmt",5,$1,$2,$3,$4,$5);}
    | IF LP Exp RP Stmt ELSE Stmt   {$$=new_node(@$.first_line,NOTTOKEN,"Stmt",7,$1,$2,$3,$4,$5,$6,$7);}
    | WHILE LP Exp RP Stmt          {$$=new_node(@$.first_line,NOTTOKEN,"Stmt",5,$1,$2,$3,$4,$5);}
    ;

// Local Definations
DefList: Def DefList                {$$=new_node(@$.first_line,NOTTOKEN,"DefList",2,$1,$2);}
    |                               {$$=NULL;}
    ;
Def: Specifier DecList SEMI         {$$=new_node(@$.first_line,NOTTOKEN,"Def",3,$1,$2,$3);}
    ;
DecList: Dec                        {$$=new_node(@$.first_line,NOTTOKEN,"DecList",1,$1);}
    | Dec COMMA DecList             {$$=new_node(@$.first_line,NOTTOKEN,"DecList",3,$1,$2,$3);}
    ;
Dec: VarDec                         {$$=new_node(@$.first_line,NOTTOKEN,"Dec",1,$1);}
    | VarDec ASSIGN Exp             {$$=new_node(@$.first_line,NOTTOKEN,"Dec",3,$1,$2,$3);}
    ;

// Expressions
Exp: Exp ASSIGN Exp                 {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | Exp AND Exp                   {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | Exp OR Exp                   {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | Exp RELOP Exp                   {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | Exp PLUS Exp                   {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | Exp MINUS Exp                   {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | Exp STAR Exp                   {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | Exp DIV Exp                   {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | Exp PERCENT Exp               {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | LP Exp RP                   {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | MINUS Exp                     {$$=new_node(@$.first_line,NOTTOKEN,"Exp",2,$1,$2);}
    | NOT Exp                       {$$=new_node(@$.first_line,NOTTOKEN,"Exp",2,$1,$2);}
    | ID LP Args RP                 {$$=new_node(@$.first_line,NOTTOKEN,"Exp",4,$1,$2,$3,$4);}
    | ID LP RP                      {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | Exp LB Exp RB                 {$$=new_node(@$.first_line,NOTTOKEN,"Exp",4,$1,$2,$3,$4);}
    | Exp DOT ID                    {$$=new_node(@$.first_line,NOTTOKEN,"Exp",3,$1,$2,$3);}
    | ID                            {$$=new_node(@$.first_line,NOTTOKEN,"Exp",1,$1);}
    | VarDec                        {$$=new_node(@$.first_line,NOTTOKEN,"Exp",1,$1);}
    | INT                           {$$=new_node(@$.first_line,NOTTOKEN,"Exp",1,$1);}
    | FLOAT                         {$$=new_node(@$.first_line,NOTTOKEN,"Exp",1,$1);}
    | OCTAL                         {$$=new_node(@$.first_line,NOTTOKEN,"Exp",1,$1);}
    | HEXNUM                        {$$=new_node(@$.first_line,NOTTOKEN,"Exp",1,$1);}
    ;
Args: Exp COMMA Args                {$$=new_node(@$.first_line,NOTTOKEN,"Args",3,$1,$2,$3);}
    | Exp                           {$$=new_node(@$.first_line,NOTTOKEN,"Args",1,$1);}
    ;

%%
// print the syntax type error
yyerror(char* msg){
    //  fprintf(stderr,"Error type B at line %d: %s.\n", yylineno, "default error");
}