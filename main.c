#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "analise_combinatoria/analise_combinatoria.h"
#include "logica_proposicional/logica_proposicional.h"
#include "matrizes/matrizes.h"
#include "menu/menu.h"
#include "somatorio/somatorio.h"

int main(int argc, char const *argv[])
{
    int opc = 0;
    int wrongOption = 0;
    setlocale(LC_ALL, "Portuguese");
    do
    {
        system("clear");
        printProgramName("Mini calculadora discreta\0");

        if(wrongOption){
            wrongOption = 0;
            printf("Nenhuma opção selecionada, tente novamente\n");
        }

        printf("   MENU\n1. Somatório\n2. Lógica proposicional\n3. Matrizes\n4. Análise combinatória\n5. Sair\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            showSomatorioSubmenu();
            break;
        case 2:
            showLogicaProposicionalSubmenu();
            break;
        case 3:
            showMatrizesSubmenu();
            break;
        case 4:
            showAnaliseCombinatoriaSubmenu();
            break;
        case 5:
            break;
        default:
            wrongOption = 1;
            break;
        }
    } while (opc != 5);

    return 0;
}
