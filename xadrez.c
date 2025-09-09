#include <stdio.h>

int main(){
    int b = 0;
    int r = 0;

    //Torre
    for (int i = 0; i < 5; i++){
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

    return 0;
}