#include <stdio.h>

int main() {
    unsigned int p_torre = 5,p_bispo = 5, p_rainha = 8;
    unsigned int p_cavalo_x = 1, p_cavalo_y = 2;

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

    printf("\ncavalo:\n\n");
    
    for(int i = 1; i <= p_cavalo_x; i++){
        for(int j = 1; j <= p_cavalo_y; j++){
            printf("baixo\n");
        }
        printf("esquerda\n");
    }

    return 0;
}
