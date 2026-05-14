/**
 * @file ex4.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-12
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*4) Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
soma dos seus elementos, e apresente o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor [8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int soma = 0;
    for (int i = 0; i < 8; i++){
        soma += vetor[i];
    }
    printf("Soma dos elementos do vetor: %d\n", soma);
    return 0;
}