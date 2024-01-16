#include <stdio.h>
#include <stdlib.h>

int main() {

    // OPERADOR TERNARIO
    // geralmente utilizado para fazer atribuições condicionais
    // variavel = condição ? valor1 : valor2;
    // se verdadeiro variavel recebe valor1
    // se falso variavel recebe valor2

    int a, x = 2, y = 3;
    a = y > x ? y : x;
    printf("a = %d \n", a);

    (y > x) ? printf("y é maior que x!\n")
            : printf("y não é maior que x!\n");

    printf("\n**** FIM ****\n");
    return 0;
}