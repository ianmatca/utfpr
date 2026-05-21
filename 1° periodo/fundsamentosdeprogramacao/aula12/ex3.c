/**
 * @file ex3.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*3) Construa um programa que leia uma matriz de tamanho
5 x 5 e escreva:
 O valor e a localização (linha, coluna) do maior valor encontrado
na matriz.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[5][5];
    int maiorValor = 0;
    int linhaMaior = 0;
    int colunaMaior = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > maiorValor){
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }//if
        }//for
    }//for

    printf("O maior valor encontrado é: %d\n", maiorValor);
    printf("Localização: Linha %d, Coluna %d\n", linhaMaior, colunaMaior);

    return 0;
}//main