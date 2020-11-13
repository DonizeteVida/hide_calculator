#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "analise_combinatoria/analise_combinatoria.h"
#include "logica_proposicional/logica_proposicional.h"
#include "matrizes/matrizes.h"
#include "somatorio/somatorio.h"
#include "vetor/vetor.h"
#include "funcoes/funcoes.h"
#include "derivadas/derivadas.h"

typedef void (*Submenu)(void);

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "");

    int opc = 0;
    int wrongOption = 0;
    
    do
    {
        system("cls");
        printf("Mini calculadora discreta\n");

        if (wrongOption)
        {
            wrongOption = 0;
            printf("Nenhuma op��o selecionada, tente novamente\n");
        }

        printf("\t\tMENU\n1.\tSomat�rio\n2.\tL�gica proposicional\n3.\tMatrizes\n4.\tAn�lise combinat�ria\n5.\tOrdenar Elementos do Vetor\n6.\tAplica��o em fun��o\n7.\tAplica��o em derivadas\n8.\tSair\n\n");
        scanf("%d", &opc);

        Submenu submenus[] = {
            showSomatorioSubmenu,
            showLogicaProposicionalSubmenu,
            showMatrizesSubmenu,
            showAnaliseCombinatoriaSubmenu,
            showVetorSubmenu,
            showFuncoesSubmenu,
            showDerivadasSubmenu,
        };

        switch (opc)
        {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            submenus[opc - 1]();
            break;
        case 8:
            break;
        default:
            wrongOption = 1;
            break;
        }
    } while (opc != 8);

    return 0;
}
