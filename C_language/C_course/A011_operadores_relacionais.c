#include <stdio.h>
#include <stdlib.h>

int main() {

    // OPERADORES RELACIONAIS
    // valor1 <operador relacional> valor2
    // Retorno:
    //     0 para Falso
    //     1 para Verdadeiro

    /*
        >
        >=
        <
        <=
        ==
        !=      Diferente
    */

    int x = 5, y = 3;
    printf("Resultado = %d\n", x > 4);
    printf("Resultado = %d\n", x >= y+2);

    if (x > y) {
        printf("Verdadeiro!\n");
    } else {
        printf("Falso!\n");
    };

    if (y > x) {
        printf("Verdadeiro!");
    } else {
        printf("Falso!");
    };

    printf("\n*** FIM ***\n\n");
    return 0;
}