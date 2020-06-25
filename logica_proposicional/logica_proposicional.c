#include <stdio.h>
#include <stdlib.h>
#include "logica_proposicional.h"

typedef int (*DoubleCheck)(int, int);
typedef int (*SingleCheck)(int);

void _getValue(const char* const who, int* where){
    printf("Digite o valor de %s: ", who);
    scanf("%d", where);
}

void _showResult(int result)
{
    printf("\nO resultado da operacao foi de %d.\n\n", result);
}

void _processDouble(DoubleCheck doubleCheck)
{
    int p = 0, q = 0;
    _getValue("p", &p);
    _getValue("q", &q);
    _showResult(doubleCheck(p, q));
}

void _processSingle(SingleCheck singleCheck, const char *const who)
{
    int r = 0;
    _getValue(who, &r);
    _showResult(singleCheck(r));
}

void showLogicaProposicionalSubmenu()
{
    DoubleCheck doubleChecks[] = {
        &and,
        &or,
        &xor,
        &ifJust,
        &ifJustIf,
    };

    int opc = 0;
    do
    {
        printf("Logica proposicional\n1. ~p\n2. ~q\n3. p ∧ q\n4. p ∨ q\n5. p <> q\n6. p -> q\n7. p <-> q\n8. Voltar ao menu anterior.\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
        case 2:
            _processSingle(&not, opc == 1 ? "p": "q");
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            _processDouble(doubleChecks[opc - 3]);
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
