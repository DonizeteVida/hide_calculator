.DEFAULT_GOAL := main

DEP = somatorio/somatorio.o logica_proposicional/logica_proposicional.o analise_combinatoria/analise_combinatoria.o matrizes/matrizes.o vetor/vetor.o funcoes/funcoes.o derivadas/derivadas.o
FLAGS = -lm
CC = gcc

DEPFLAGS = ${DEP} ${FLAGS}

FMAIN = main.c -o main ${DEPFLAGS}

maindebug: ${DEP}
	${CC} -g -Wall ${FMAIN}

main: ${DEP}
	${CC} ${FMAIN}

%.o: %/%.c %/%.h
	${CC} -c %/%.c