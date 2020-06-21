#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "somatorio.h"

typedef struct
{
    double m, n;
} ValorSomatorio;

ValorSomatorio _pegarValores()
{
    ValorSomatorio valorSomatorio;

    printf("Digite o valor inicial, m: ");
    scanf("%lf", &valorSomatorio.m);

    printf("Digite o valor da final, n: ");
    scanf("%lf", &valorSomatorio.n);

    return valorSomatorio;
}

long double _processaSomatorio(long double (*somatorio)(long double, long double))
{
    ValorSomatorio valor = _pegarValores();
    return somatorio(valor.m, valor.n);
}

void _processarResultado(long double resultado, int qualSomatorio)
{
    printf("O resultado do somatório %d foi de %Le.\n\n", qualSomatorio, resultado);
}

long double _factorial(long double num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * _factorial(num - 1);
}

void showSomatorioSubmenu()
{
    int opc;

    do
    {
        printf("   SOMATÓRIO\n1. Somatório de j até m para a regra j\n2. Somatório de j = m até n para a regra (-j)^(j+1)\n3. Somatório de j = 0 até n para a regra 1/j!\n4. Somatório de j = 0 até n para a regra 8 / ( ( 4j + 1 ) * ( 4j + 3 ) )\n5. Sair do somatório\n\n");
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
            _processarResultado(_processaSomatorio(&somatorio3), 3);
            break;
        case 4:
            _processarResultado(_processaSomatorio(&somatorio4), 4);
            break;
        default:
            break;
        }
    } while (opc != 5);
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

long double somatorio3(long double m, long double n)
{
    if (m == n)
    {
        return 1 / _factorial(m);
    }
    return 1 / _factorial(m) + somatorio3(m + 1, n);
}

long double somatorio4(long double m, long double n)
{
    if (m == n)
    {
        return 8 / ((4 * m + 1) * (4 * m + 3));
    }
    return 8 / ((4 * m + 1) * (4 * m + 3)) + somatorio4(m + 1, n);
}