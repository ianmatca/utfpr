/**
 * @file ex3.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-12
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*3) Leia um vetor A com 10 elementos inteiros correspondentes
as idades de um grupo de pessoas. Escreva um programa que
conte e exiba a quantidade de pessoas que possuem idade
superior a 35 anos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetorA [10];
    int count = 0;
    printf("Digite as idades do grupo de pessoas: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetorA[i]);
    }
    for (int i = 0; i < 10; i++){
        if (vetorA[i] > 35){
            count++;
        }
    }
    printf("Quantidade de pessoas com idade superior a 35 anos: %d\n", count);
    return 0;
}