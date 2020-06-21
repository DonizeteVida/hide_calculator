#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "somatorio.h"

typedef struct
{
    double m, n;
} ValoresSomatorio;

void showSomatorioSubmenu()
{
    int opc;

    do
    {
        system("clear");
        printf("   SOMATÓRIO\n1. Somatório de j até m para a regra j\n2. Somatório de j = m até n para a regra (-j)^(j+1)\n3. Voltar ao menu anterior\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            break;
        }
    } while (opc != 3);
}

long double somatorio1(long double m, long double n)
{
    if (m == n)
    {
        return m;
    }
    return m + somatorio1(m + 1, n);
}

long double somatorio2(long double m, long double n)
{
    if (m == n)
    {
        return pow(-m, m + 1);
    }
    return pow(-m, m + 1) + somatorio2(m + 1, n);
}