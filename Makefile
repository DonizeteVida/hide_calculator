.DEFAULT_GOAL := main

DEP = somatorio/somatorio.o menu/menu.o
FLAGS = -lm
CC = gcc

maindebug: ${DEP}
	${CC} -g main.c -o main ${DEP} ${FLAGS}

main: ${DEP}
	${CC} main.c -o main ${DEP} ${FLAGS}

%.o: %/%.c %/%.h
	${CC} -c %/%.c