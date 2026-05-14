/**
 * @file ex5.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-12
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*5)Dado dois vetores, A (4 elementos) e B (5 elementos), faça
um programa em C que imprima todos os elementos comuns
aos dois vetores.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorA [4];
    int vetorB [5];
    printf("Digite os valores do vetor A: \n");
    for (int i = 0; i < 4; i++){
        scanf("%d", &vetorA[i]);
    }
    printf("Digite os valores do vetor B: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &vetorB[i]);
    }
    printf("Elementos comuns aos dois vetores: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if (vetorA[i] == vetorB[j]){
                printf("%d ", vetorA[i]);
            }
        }
    }
    return 0;
}