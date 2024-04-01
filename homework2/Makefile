cc?=gcc
file?=test1
flex?=../flex-2.6.4-build/bin/flex
bison?=../bison-3.7.91-build/bin/bison
num?=1

build:
	$(flex) --outfile=./src/lex.c ./src/lexical.l
	$(bison) -d ./src/syntax.y
	rm ./src/lex.c
	$(flex) --outfile=./src/lex.c ./src/lexical.l
	$(cc) ./src/main.c ./src/tree/node.c ./syntax.tab.c -lfl -o parser

rerun:
	rm ./syntax.tab.*
	rm ./src/lex.c
	$(flex) --outfile=./src/lex.c ./src/lexical.l
	$(bison) -d ./src/syntax.y
	rm ./src/lex.c
	$(flex) --outfile=./src/lex.c ./src/lexical.l
	$(cc) ./src/main.c ./src/tree/node.c ./syntax.tab.c -lfl -o parser

my_test:
	./parser ./test/test$(num).cmm