#include <stdio.h>
#include <stdlib.h>
#include "logica_proposicional.h"

void showLogicaProposicionalSubmenu()
{
    int opc = 0;

    do
    {
        system("cls");
        printf("Logica proposicional\n1. ~p\n2. ~q\n3. p ∧ q\n4. p ∨ q\n5. p <> q\n6. p -> q\n7. p <-> q\n8. Voltar ao menu anterior.\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            break;
        }
    } while (opc != 8);
}

typedef int (*DoubleCheck)(int, int);
typedef int (*SingleCheck)(int);

int not(int value)
{
    return !value;
}

int and (int value1, int value2)
{
    return value1 && value2;
}

int or (int value1, int value2)
{
    return value1 || value2;
}

int xor (int value1, int value2) {
    return value1 ^ value2;
}

    int ifJust(int value1, int value2)
{
    return or (not(value1), value2);
}

int ifJustIf(int value1, int value2)
{
    return value1 == value2;
}
