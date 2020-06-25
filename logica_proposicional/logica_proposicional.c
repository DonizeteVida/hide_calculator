#include <stdio.h>
#include <stdlib.h>
#include "logica_proposicional.h"

typedef int (*DoubleCheck)(int, int);
typedef int (*SingleCheck)(int);

void _processDouble(DoubleCheck doubleCheck)
{

}

void _processSingle(SingleCheck singleCheck,const char*const who)
{
}

void showLogicaProposicionalSubmenu()
{
    int opc = 0;
    do
    {
        system("clear");
        printf("Logica proposicional\n1. ~p\n2. ~q\n3. p ∧ q\n4. p ∨ q\n5. p <> q\n6. p -> q\n7. p <-> q\n8. Voltar ao menu anterior.\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            _processSingle(&not, "p");
            break;
        case 2:
            _processSingle(&not, "q");
            break;
        case 3:
            _processDouble(&and);
            break;
        case 4:
            _processDouble(& or);
            break;
        case 5:
            _processDouble(&xor);
            break;
        case 6:
            _processDouble(&ifJust);
            break;
        case 7:
            _processDouble(&ifJustIf);
            break;
        }
    } while (opc != 8);
}

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
