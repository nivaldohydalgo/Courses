#include <stdio.h>
#include <stdlib.h>

int main() {

    // OPERADORES LOGICOS
    //    &&   Operador E
    //    ||   Operador OU
    // Resultado:
    //    O é falso
    //    1 é verdadeiro

    // OPERADOR DE NEGACAO
    //    !(expressão)
    //  inverte o resultado da expressão

    int r, x = 5, y = 3;
    r = (x > 2) && (y < x);
    printf("Resultado = %d\n", r);

    r = (x > 10) || !(y < x);
    printf("Resultado = %d\n", r);

    return 0;
}