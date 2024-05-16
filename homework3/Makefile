cc?=gcc
file?=test1
flex?=flex
bison?=bison
num?=1
CFLAGS = -std=c99

build:
	$(flex) --outfile=./src/lex.c ./src/lexical.l
	$(bison) -d ./src/syntax.y
	rm ./src/lex.c
	$(flex) --outfile=./src/lex.c ./src/lexical.l
	$(cc) ./src/main.c ./src/tree/node.c ./src/ir/inter.c ./syntax.tab.c ./src/symbol/symbol.c -lfl -Isrc/ -Isrc/symbol/ -Isrc/tree/ -o parser -g

rerun:
	rm ./syntax.tab.*
	rm ./src/lex.c
	$(flex) --outfile=./src/lex.c ./src/lexical.l
	$(bison) -d ./src/syntax.y
	rm ./src/lex.c
	$(flex) --outfile=./src/lex.c ./src/lexical.l
	$(cc) ./src/main.c ./src/tree/node.c ./src/ir/inter.c ./syntax.tab.c ./src/symbol/symbol.c -lfl -Isrc/ -Isrc/symbol/ -Isrc/tree/ -o parser -g

my_test:
	./parser ./test/test$(num).cmm ./out/out$(num).ir

clean:
	rm ./syntax.tab.*
	rm ./src/lex.c
	rm ./parser
