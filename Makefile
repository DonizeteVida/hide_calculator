main: somatorio/somatorio.o menu/menu.o
	gcc main.c -o main somatorio/somatorio.o menu/menu.o -lm

somatorio.o: somatorio/somatorio.c somatorio/somatorio.h
	gcc -c somatorio/somatorio.c -o somatorio/somatorio.o

menu.o: menu/menu.c menu/menu.h
	gcc -c menu/menu.c -o menu/menu.o