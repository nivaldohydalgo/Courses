#include <stdio.h>
#include <stdlib.h>

int main() {
    // COMANDO WHILE
    int a, b;
    printf("\nDigite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    while(a <= b) {
        printf("%d\n", a);
        a++;
    }

    printf("\n******** FIM ********\n\n");
    return 0;
}