cc?=gcc
file?=test1
flex?=flex
bison?=bison
num?=1

run: 
	$(flex) --outfile=./src/lex.c ./src/lexical.l
	$(bison) -d ./src/syntax.y
	$(cc) ./src/main.c ./src/syntax.tab.c -lfl -ly -o parser

flex_build:
	$(flex) --outfile=./src/lex.c ./src/lexical.l

bison_build:
	$(bison) -d ./src/syntax.y

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

an_test:
	./parser ./test_an/testcase_$(num)


clean:
	rm ./src/lex.c
	rm ./flexout


