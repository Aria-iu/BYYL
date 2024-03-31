cc?= gcc
file?= test1
flex?=/home/zyc/rust_projects/BYYL/flex-2.6.4-build/bin/flex
bison?=/home/zyc/rust_projects/BYYL/bison-3.7.91-build/bin/bison

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

mytest:
	cd work1_script/ && cargo run --bin test1 && cd ..


clean:
	rm ./src/lex.c
	rm ./flexout


