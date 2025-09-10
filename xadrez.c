#include <stdio.h>

int main(){
    int b = 0;
    int r = 0;
    int movimentoCavalo = 2;

    //Torre
    for (int t = 0; t < 5; t++){
        printf("Torre se move para direita\n"); // Torre move 5 casas para a direita
    }

    //Bispo
    do{
        printf("Bispo de move para cima e direita\n"); // Bispo move 5 casas na diagonal
        b++;
    } while (b < 5);

    //Rainha
    while (r < 5){
        printf("Rainha se move para esquerda\n"); // Rainha move 5 casas para a esquerda
        r++;
    }

    //cavalo
    while(movimentoCavalo--){
        for(int c = 0; c < 2; c++){
            printf("Cavalo se move para cima\n"); // Cavalo move 2 casas para cima
        }
        printf("Cavalo se move para direita\n"); // Cavalo move 1 casa para a direita
    }

    return 0;
}