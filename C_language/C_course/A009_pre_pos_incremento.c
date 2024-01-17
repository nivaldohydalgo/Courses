#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10, y = 10;

    x++;
    ++y;
    printf("x = %d \n", x);
    printf("y = %d \n", y);

    x--;
    --y;
    printf("x = %d \n", x);
    printf("y = %d \n", y);

    int z;
    z = x++;    // isso não funciona porque primeiro atribui x para z depois incrementa
                // no final x fica 11 e z fica 10
    printf("z = %d \n", z);

    z = ++x;    // isso funciona porque primeiro incrementa
                // o x = 11 porque foi incrementado acima
    printf("z = %d \n", z);

    return 0;
}