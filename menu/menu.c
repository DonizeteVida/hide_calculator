#include "menu.h"
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

typedef struct winsize Size;

void printProgramName(const char *const name)
{
    Size size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
    for (int i = 0; i < size.ws_col; i++)
    {
        printf("%%");
    }
    printf("\n\n");
    //***************************************
    int quantity = strlen(name);
    int diference = size.ws_col - quantity;
    for (int i = 0; i < diference / 2; i++)
    {
        printf(" ");
    }
    printf("%s", name);
    for (int i = 0; i < diference / 2; i++)
    {
        printf(" ");
    }
    printf("\n\n");
    //***************************************
    for (int i = 0; i < size.ws_col; i++)
    {
        printf("%%");
    }
    printf("\n\n");
}