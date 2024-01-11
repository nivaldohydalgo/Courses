#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main() {
    int numero1 = 10;
    const int numero2 = 20;
    
    numero1 = 30;
    // numero2 = 40;    // essa atribuição dá erro

    float f = PI + 1;
    printf("PI = %f \n", PI);
    printf("f  = %f \n", f);
    // PI = 14.4;     // isso dá erro 

}
