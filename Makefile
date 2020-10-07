.DEFAULT_GOAL := main

DEP = somatorio/somatorio.o menu/menu.o logica_proposicional/logica_proposicional.o analise_combinatoria/analise_combinatoria.o matrizes/matrizes.o vetor/vetor.o funcoes/funcoes.o derivadas/derivadas.o
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