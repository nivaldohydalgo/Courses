#include <stdio.h>
#include <stdlib.h>

int main() {
 
 /*
    char letra;
    int inteiro;
    float decimal;
    double decimal_longo;

    printf("Informe a letra.....: ");
    scanf("%c", &letra);
    printf("Informe o inteiro...: ");
    scanf("%d", &inteiro);
    printf("Informe o decimal...: ");
    scanf("%f", &decimal);
    printf("Informe o double....: ");
    scanf("%f", &decimal_longo);
*/

    char nome;
    printf("\nDigite seu nome: ");
    scanf("%c", &nome);
    printf("\nSeu nome é %c\n", nome);

    system("read -p 'Press Enter to continue...' var");
    return 0;
}