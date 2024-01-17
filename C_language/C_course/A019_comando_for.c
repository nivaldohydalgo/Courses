#include <stdio.h>
#include <stdlib.h>

int main() {
    // COMANDO FOR
    int a, b, c;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    for (c = a; c <= b; c++) {
        printf("%d, ", c);
    }

    printf("\n******** FIM ********\n\n");
    return 0;
}