#include <stdio.h>

void move_torre(int num){
    if(num>0){
        move_torre(num-1);
        printf("direita\n");

    }
}

void move_bispo(int num){
    if(num>0){
        move_bispo(num-1);
        printf("cima, direita\n");

    }
}

void move_rainha(int num){
    if(num>0){
        move_rainha(num-1);
        printf("esquerda\n");

    }
}

void move_cavalo(int num_x,int num_y){
    if(num_y>0){
        if(num_x>0){
        printf("esquerda\n");
        }
        printf("baixo\n");
        move_cavalo(num_x-1, num_y-1);
    }
}


int main() {
    int p_torre = 5,p_bispo = 5, p_rainha = 8;
    int p_cavalo_x = 1, p_cavalo_y = 2;

    printf("torre:\n\n");

    move_torre(p_torre);

    printf("\nbispo:\n\n");

    move_bispo(p_bispo);

    printf("\nrainha:\n\n");

    move_rainha(p_rainha);

    printf("\ncavalo:\n\n");
    
    move_cavalo(p_cavalo_x, p_cavalo_y);

    return 0;
}
