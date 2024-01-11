#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Comando: printf\n\n");

    char letra = 'N';
    int inteiro = 10;
    float decimal = 5.25;
    float decimal_2;
    double decimal_longo = 5.0e3;

    printf("%c \n", letra);
    printf("%d \n", inteiro);
    printf("%f \n", decimal);
    printf("%f \n", decimal_longo);
    printf("a letra %c eh %d inteiro\n\n", letra, inteiro);

    return 0;
}
