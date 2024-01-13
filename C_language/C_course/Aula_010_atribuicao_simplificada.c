#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 10, y = 10;
    int z = 2;
    x = x + z;
    printf("x = %d \n", x);

    // ATRIBUICAO SIMPLIFICADA
    y += z;
    printf("y = %d \n", y);

    // pode ser usado com - * / %


    return 0;
}