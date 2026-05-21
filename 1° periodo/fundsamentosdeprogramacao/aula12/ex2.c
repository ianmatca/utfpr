/**
 * @file ex2.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*2) Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
retorna a soma dos elementos da sua diagonal principal e
da sua diagonal secundária*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[3][3];
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    printf("Digite os elementos da matriz 3x3:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }//for
    }//for

    for(int i = 0; i < 3; i++){
        somaDiagonalPrincipal += matriz[i][i]; // Diagonal principal
        somaDiagonalSecundaria += matriz[i][2 - i]; // Diagonal secundária
    }//for

    printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secundária: %d\n", somaDiagonalSecundaria);

    return 0;
}//main