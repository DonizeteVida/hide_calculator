#include <stdio.h>
#include "somatorio/somatorio.h"

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("arg n %d is %s", i, argv[i]);
    }
    somatorio1(1, 1);
    return 0;
}
