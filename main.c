#include <stdio.h>
#include <stdlib.h>
#include "somatorio/somatorio.h"
#include "menu/menu.h"

int main(int argc, char const *argv[])
{
    int opc = 0;

    do
    {
        system("clear");
        printProgramName("Mini calculadora discreta\0");
        printf("   MENU\n1. Somatório\n2. Lógica proposicional\n3. Matrizes\n4. Análise combinatória\n5. Sair\n\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            showSomatorioSubmenu();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        default:
            printf("Nenhuma opção selecionada, tente novamente\n");
            break;
        }
    } while (opc != 5);

    return 0;
}
