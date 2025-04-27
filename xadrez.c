#include <stdio.h>

int main() {
    unsigned int p_torre = 5,p_bispo = 5, p_rainha = 8;

    printf("torre:\n\n");

    for(int i = 1; i <= p_torre; i++){
        printf("direita\n");
    }

    printf("\nbispo:\n\n");

    for(int i = 1; i <= p_bispo; i++){
        printf("cima, direita\n");
    }

    printf("\nrainha:\n\n");

    for(int i = 1; i <= p_rainha; i++){
        printf("esquerda\n");
    }

    return 0;
}
