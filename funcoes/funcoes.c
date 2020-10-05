#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

/*1*/ float constK(FPair *pair)
{
    return pair->right;
}

/*2*/ float x(FPair *pair)
{
    return powf(pair->left, pair->right);
}

/*3*/ float k(FPair *pair)
{
    return powf(pair->left, pair->right);
}

/*4*/ float e(float expo)
{
    return powf(E, expo);
}

/*5*/ float logbn(FPair *pair)
{
    return log10(pair->right) / log10(pair->left);
}

/*6*/ float ln(float number)
{
    return log(number);
}

/*7*/ float half(float number)
{
    return 1.0 / number;
}

/*8*/ float fsin(float number)
{
    return sinf(number / 360.0  * PI * 2);
}

/*9*/ float fcos(float number)
{
    return cosf(number / 360.0  * PI * 2);
}

/*10*/ float ftan(float number)
{
    return tanf(number / 360.0  * PI * 2);
}

FPair *getPair()
{
    FPair *pair = (FPair *)malloc(sizeof(FPair));
    printf("Digite o primeiro valor: ");
    scanf("%f", &pair->left);

    printf("Digite o segundo valor: ");
    scanf("%f", &pair->right);

    return pair;
}

float getFloat()
{
    float f;
    printf("Digite o valor: ");
    scanf("%f", &f);
    return f;
}

void mostrarValor(float valor)
{
    fflush(stdin);
    system("cls");
    printf("O valor foi de %.2f\n", valor);
    getchar();
}

void showFuncoesSubmenu()
{
    int opc;
    do
    {
        system("cls");
        printf("\tAplicação em Função\n1.\tf(x) = k\n2.\tf(x) = x^k\n3.\tf(x) = k^x\n4.\tf(x) = e^x\n5.\tf(x) = log k(x)\n6.\tf(x) = ln(x)\n7.\tf(x) = 1/x\n8.\tf(x) = sen(x)\n9.\tf(x) = cos(x)\n10.\tf(x) = tan(x)\n11.\tVOLTAR AO MENU PRINCIPAL\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            mostrarValor(constK(getPair()));
            break;
        case 2:
            mostrarValor(x(getPair()));
            break;
        case 3:
            mostrarValor(k(getPair()));
            break;
        case 4:
            mostrarValor(e(getFloat()));
            break;
        case 5:
            mostrarValor(logbn(getPair()));
            break;
        case 6:
            mostrarValor(ln(getFloat()));
            break;
        case 7:
            mostrarValor(half(getFloat()));
            break;
        case 8:
            mostrarValor(fsin(getFloat()));
            break;
        case 9:
            mostrarValor(fcos(getFloat()));
            break;
        case 10:
            mostrarValor(ftan(getFloat()));
            break;
        }
    } while (opc != 11);
}