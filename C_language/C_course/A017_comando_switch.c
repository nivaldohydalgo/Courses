#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
    COMANDO SWITCH
    switch (variavel) {
        case valor1: comandos 1; break;
        case valor2: comandos 2; break;
        case valorn: comandos n; break;
        default: comandos;
    }
    
    */

    char ch;
    printf("Digite um simbolo de pontuacao: ");
    scanf("%c", &ch);
    printf("Voce digitou: ");
    switch (ch)
    {
        case '.': printf("ponto\n"); break;
        case ',': printf("virgula\n"); break;
        case ':': printf("dois pontos\n"); break;
        case ';': printf("ponto e virgula\n"); break;
        default: printf("Você não digitou um simbolo de pontuação!\n");
    }
    printf("\n**** FIM ****\n");
    return 0;
}