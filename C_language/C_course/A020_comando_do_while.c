#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    do {
        printf("%d\n", a);
        a++;
    } while (a <= b);

    printf("\n******** FIM ********\n\n");
    return 0;
}