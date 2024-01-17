#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("\nPressione qualquer tecla para limpar a tela!");
    getchar();

    #ifdef _WIN32
        system("cls");
    #elif __linux
        system("clear");
    #else
        printf("sistema operacional não reconhecido!");
    #endif

    printf("\nNovamente pressione qualquer tecla!");
    getchar();

    printf("\n******** FIM ********\n\n");

    return 0;
}