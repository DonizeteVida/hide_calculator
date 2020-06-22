.DEFAULT_GOAL := main

DEP = somatorio/somatorio.o menu/menu.o
FLAGS = -lm
CC = gcc

DEPFLAGS = ${DEP} ${FLAGS}

FMAIN = main.c -o main ${DEPFLAGS}

maindebug: ${DEP}
	${CC} -g ${FMAIN}

main: ${DEP}
	${CC} ${FMAIN}

%.o: %/%.c %/%.h
	${CC} -c %/%.c