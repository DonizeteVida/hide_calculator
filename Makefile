.DEFAULT_GOAL := main

maindebug: somatorio/somatorio.o menu/menu.o
	gcc -g main.c somatorio/somatorio.o menu/menu.o -lm

main: somatorio/somatorio.o menu/menu.o
	gcc main.c somatorio/somatorio.o menu/menu.o -lm

somatorio.o: somatorio/somatorio.c somatorio/somatorio.h
	gcc -c somatorio/somatorio.c

menu.o: menu/menu.c menu/menu.h
	gcc -c menu/menu.c