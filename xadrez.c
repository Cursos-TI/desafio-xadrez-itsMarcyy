#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0){
        printf("Torre se move para a direita.\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0){
        printf("Bispo se move para cima e direita.\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0){
        printf("Rainha se mover para a esquerda.\n");
        moverRainha(casas - 1);
    }
}

int main(){
    int b = 0;
    int r = 0;
    int movimentoCavalo = 2;

    //Torre
    moverTorre(5); // Torre move 5 casas para a direita

    //Bispo recursivo
    moverBispo(5); // Bispo move 3 casas para cima e direita

    //Bispo com loops aninhados
    for(int vertical = 0; vertical < 5; vertical++){ // Movimento vertical
    for(int horizontal = 0; horizontal < 5; horizontal++){ // Movimento horizontal
        if(vertical == horizontal){ // Só na diagonal
            printf("Loops: Bispo se move para cima e direita.\n");
        }
    }
}

    //Rainha
    moverRainha(8); // Rainha move 8 casas para a esquerda

    //cavalo loops complexos
    for (int i = 0; i <2; i++){
        for (int j = 0; j < 3; j++){
            if (j < 2){
                printf("Cavalo se move para cima.\n");
                if (j == 0) continue;
            }else {
                printf("Cavalo se move para a direita.\n");
                break;
            }
        }
    }

    return 0;
}