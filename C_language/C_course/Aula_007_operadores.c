#include <stdio.h>
#include <stdlib.h>

int main() {
    // soma             +
    // substração       -
    // multiplicação    *
    // divisão          /
    // resto            %

    int x1, x2 = 10, x3 = 12;
    char ch1, ch2 = '0', ch3 = 'A';
    float f1, f2 = 5.25, f3 = 10.5;
    x1 = x2 + x3;
    ch1 = ch2 + ch3;
    f1 = f2 + f3;
    printf("x1 = %d \n", x1);
    printf("x? = %d \n", x2 + x3 * 2);
    printf("ch1 = %c (%d) \n", ch1, ch1);
    printf("f1 = %f \n", f1);

    // pode fazer operações com char
    // na divisão se o dividendo e divisor forem int, o resultado sempre será int
    // na divisão para ter um resultado float o divisor ou dividendo devem ser float
    // a operação de resto deve sempre ser feita com numeros int

    float resto;
    // resto = 9 % 2.5;    --> isso não funciona porque não pode ter o 2.5
    resto = 9 % 2;
    printf("resto = %f \n", resto);

    return 0;
}