#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        const char const *arg = argv[i];
        if (arg[0] == 'n')
        {
            printf("Name is %s\n", arg);
        }
    }

    return 0;
}
