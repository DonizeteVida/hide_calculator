#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "somatorio.h"

typedef struct
{
    double m, n;
} ValorSomatorio;

ValorSomatorio *_pegarValores()
{
    ValorSomatorio valoresSomatorio;

    printf("Digite o valor inicial, m: ");
    scanf("%lf", &valoresSomatorio.m);

    printf("Digite o valor da final, n: ");
    scanf("%lf", &valoresSomatorio.n);

    return &valoresSomatorio;
}

long double _processaSomatorio(long double (*somatorio)(long double, long double))
{
    ValorSomatorio *valor = _pegarValores();
    return somatorio(valor->m, valor->n);
}

void _processarResultado(long double resultado, int qualSomatorio)
{
    printf("O resultado do somatório %d foi de %lf.\n", qualSomatorio, resultado);
    getchar();
}

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
            _processarResultado(_processaSomatorio(&somatorio1), 1);
            break;
        case 2:
            _processarResultado(_processaSomatorio(&somatorio2), 2);
            break;
        case 3:
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