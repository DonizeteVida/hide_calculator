#include "menu.h"
#include <sys/ioctl.h>
#include <unistd.h>
#include <stdio.h>

typedef struct winsize Size;

void printProgramName(const char *const name)
{
    Size size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);

    for (int i = 0; i < size.ws_col; i++)
    {
        printf("*");
    }
}