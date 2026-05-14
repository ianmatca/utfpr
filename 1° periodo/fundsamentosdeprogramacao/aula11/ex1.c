/**
 * @file ex1.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-12
 * 
 * @copyright Copyright (c) 2026
 * 
 */
/*1) Faça um programaque leia e armazene dois vetores de tamanho 5. Ao final o programa deve calcular e exibir o vetor soma*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor1 [5];
    int vetor2 [5];
    int vetorSoma [5];
    printf("Digite os valores do primeiro vetor: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &vetor1[i]);
    }
    printf("Digite os valores do segundo vetor: \n");
    for (int i = 0; i < 5; i++){
        scanf("%d", &vetor2[i]);
    }
    for (int i = 0; i < 5; i++){
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }
    printf("Vetor soma: \n");
    for (int i = 0; i < 5; i++){
        printf("%d ", vetorSoma[i]);
    }
    return 0;
}