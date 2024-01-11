#include <stdio.h>
#include <stdlib.h>

int main() {
    // variavel = expressão

    int x = 5, y;
    y = x;
    y = x + 10;

    int a, b, c;
    a = b = c = 10;

    printf("\nx é igual a %d e y é igual a %d\n", x, y);
    printf("\na = %d; b = %d; c = %d\n", a, b, c);

    char v = 101;
    printf("\no char 101 é %c\n", v);

    return 0;
}
