#include <stdio.h>

//TORRE
void torre(int casas){
    if (casas == 0)
        return;
    printf("Direita\n");
    torre(casas - 1);
}

//Rainha
void rainha(int casas){
    if(casas == 0)
        return;
    printf("Esquerda\n");
    rainha(casas - 1);
}

//Bispo
void bispo(int casas){
    if(casas == 0)
        return;
    for (int i = 1; i <= 1; i++)
    {
        printf("Cima");
        for (int j = 1; j <= 1; j++)
        {
            printf("Direita\n");
        }
    }
    bispo(casas - 1);
}

//MOVIMENTOS
int main(){

//Torre
    printf("Movimento da Torre: \n");
    torre(5);
    printf("\n");
//Bispo
    printf("Movimento da Bispo: \n");
    bispo(5);
    printf("\n");
//Rainha
    printf("Movimento da Rainha: \n");
    rainha(8);
    printf("\n");
//Cavalo
    printf("Movimento do Cavalo: \n");

    int cima = 2, direita = 1;

    for (int i = 1; i <= cima; i++)
    {
        printf("Cima\n");

        if(i == cima){
            int j = 1;
            while(j <= direita){
                printf("Direita\n");
                j++;
            }
        }
    }
    return 0;
}