/**
 * @file ex2.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-12
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*2) Crie um algoritmo que receba 10 números e os armazene em
um vetor A. Em seguida, gere o vetor B onde cada elemento é o
quadrado do valor da mesma posição no vetor A*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorA [10];
    int vetorB [10];
    printf("Digite os valores do vetor A: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetorA[i]);
    }
    for (int i = 0; i < 10; i++){
        vetorB[i] = vetorA[i] * vetorA[i];
    }
    printf("Vetor B: \n");
    for (int i = 0; i < 10; i++){
        printf("%d ", vetorB[i]);
    }
    return 0;
}