%{
    #include "../syntax.tab.h"
    #include "tree/node.h"
    extern unsigned int LexError;

    int yycoloum = 1;
    #define YY_USER_ACTION \
        yylloc.first_line=yylloc.last_line=yylineno; \
        yylloc.first_column=yycoloum;   \
        yylloc.last_column=yycoloum+yyleng-1;   \
        yycoloum+=yyleng;
%}
%option yylineno

LETTER [_a-zA-Z]
Id [0-9_a-zA-Z]
ID {LETTER}{Id}*
IdNew [0-9_a-zA-Z ]
IdNew2 [0-9_a-zA-Z \n\r]
STRING {IdNew}*
STRING2 {IdNew2}*
INT 0|[1-9]+[0-9]*
DIGIT [0-9]
FLOAT [1-9]{DIGIT}*"."{DIGIT}+|0"."{DIGIT}+|{DIGIT}*"."{DIGIT}+[eE][+-]?{DIGIT}+
SEMI ";"
COMMA ","
ASSIGN "="
RELOP >|<|>=|<=|==|!=
PLUS "+"
MINUS "-"
STAR "*"
DIV "/"
AND "&&"
OR "||"
DOT "."
NOT "!"
TYPE int|float
LP "("
RP ")"
LB "["
RB "]"
LC "{"
RC "}"
STRUCT struct
RETURN return
IF if
ELSE else
WHILE while
WS [ \t]
OCTAL 0[0-7]*
HEXNUM 0x[0|1|2|3|4|5|6|7|8|9|a|b|c|d|e|f|A|B|C|D|E|F]+|0X[0|1|2|3|4|5|6|7|8|9|a|b|c|d|e|f|A|B|C|D|E|F]+
COMMENT "//"
BLOCKCOMMENTSIGNBEGIN "/*"
BLOCKCOMMENTSIGNEND "*/"
LINECOMMENT {COMMENT}{WS}*{STRING}*\n
BLOCKCOMMENT {BLOCKCOMMENTSIGNBEGIN}{WS}*{STRING2}*{BLOCKCOMMENTSIGNEND}
NESTBLOCKCOMMENT {BLOCKCOMMENTSIGNBEGIN}{WS}*{STRING2}*{BLOCKCOMMENT}{WS}*{STRING2}*{BLOCKCOMMENTSIGNEND}
JINGHAO "#"
INCLUDE include
INCFILE "<"{ID}".h>"

%%
{WS}+ {;}
\r {;}
\n {;}
{LINECOMMENT} {;}
{NESTBLOCKCOMMENT} {;}
{BLOCKCOMMENT} {;}
{JINGHAO} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"#",yytext);return JINGHAO;}
{INCLUDE} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"INCLUDE",yytext);return INCLUDE;}
{INCFILE} {yylval.pnode=new_token_node(yylineno,INC_FILE,"INC_FILE",yytext);return INCFILE;}
{WHILE} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"WHILE",yytext);return WHILE;}
{IF} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"IF",yytext);return IF;}
{ELSE} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"ELSE",yytext);return ELSE;}
{RETURN} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"RETURN",yytext);return RETURN;}
{STRUCT} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"STRUCT",yytext);return STRUCT;}
{RC} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"RC",yytext);return RC;}
{LC} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"LC",yytext);return LC;}
{RB} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"RB",yytext);return RB;}
{LB} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"LB",yytext);return LB;}
{RP} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"RP",yytext);return RP;}
{LP} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"LP",yytext);return LP;}
{TYPE} {yylval.pnode=new_token_node(yylineno,TYPE_TOKEN,"TYPE",yytext);return TYPE;}
{NOT} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"NOT",yytext);return NOT;}
{DOT} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"DOT",yytext);return DOT;}
{OR} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"OR",yytext);return OR;}
{AND} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"AND",yytext);return AND;}
{DIV} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"DIV",yytext);return DIV;}
{STAR} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"STAR",yytext);return STAR;}
{MINUS} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"MINUS",yytext);return MINUS;}
{PLUS} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"PLUS",yytext);return PLUS;}
{RELOP} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"RELOP",yytext);return RELOP;}
{ASSIGN} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"ASSIGNOP",yytext);return ASSIGN;}
{COMMA} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"COMMA",yytext);return COMMA;}
{SEMI} {yylval.pnode=new_token_node(yylineno,CAN_NO_VAL,"SEMI",yytext);return SEMI;}
{FLOAT} {yylval.pnode=new_token_node(yylineno,FLOAT_TOKEN,"FLOAT",yytext);return FLOAT;}
{INT} {yylval.pnode=new_token_node(yylineno,INT_TOKEN,"INT",yytext);return INT;}
{OCTAL} {yylval.pnode=new_token_node(yylineno,OCTAL_TOKEN,"OCTAL",yytext);return OCTAL;}
{HEXNUM} {yylval.pnode=new_token_node(yylineno,HEXNUM_TOKEN,"HEXNUM",yytext);return HEXNUM;}
{ID} {yylval.pnode=new_token_node(yylineno,ID_TOKEN,"ID",yytext);return ID;}


[1-9]+{ID}|0[^x|X]{ID} {LexError=1;printf("Error type A at Line %d: Illegal ID \'%s\'.\n", yylineno, yytext);}
"."{DIGIT}+ {LexError=1;printf("Error type A at Line %d: Illegal floating point number \"%s\".\n", yylineno, yytext);}
{DIGIT}+"." {LexError=1;printf("Error type A at Line %d: Illegal floating point number \"%s\".\n", yylineno, yytext);}
{DIGIT}*"."{DIGIT}+[eE] {LexError=1;printf("Error type A at Line %d: Illegal floating point number \"%s\".\n", yylineno, yytext);}
{DIGIT}*"."{DIGIT}*[eE] {LexError=1;printf("Error type A at Line %d: Illegal floating point number \"%s\".\n", yylineno, yytext);}
{OCTAL}+[8-9]+ {LexError=1;printf("Error type A at Line %d: Illegal octal number \'%s\'.\n", yylineno, yytext);}
0X[0-9a-zA-Z]*[g-zG-Z]+[0-9a-zA-Z]*|0x[0-9a-zA-Z]*[g-zG-Z]+[0-9a-zA-Z]* {LexError=1;printf("Error type A at Line %d: Illegal hexadecimal number \'%s\'.\n", yylineno, yytext);}
. {LexError=1;printf("Error type A at Line %d: Mysterious character \'%s\'.\n", yylineno, yytext);}
%%