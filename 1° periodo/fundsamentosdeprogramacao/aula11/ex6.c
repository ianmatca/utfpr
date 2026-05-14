/**
 * @file ex6.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-12
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*6) Faça um programa que receba e armazene 20 números em
um vetor. Em seguida exiba:
 Quantos números são iguais a 30;
 Quantos números são maior que a média;
 Quantos números são iguais à media;*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor [20];
    int count30 = 0;
    int countMaiorMedia = 0;
    int countIgualMedia = 0;
    float media = 0;
    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < 20; i++){
        scanf("%d", &vetor[i]);
        media += vetor[i];
    }
    media /= 20;
    for (int i = 0; i < 20; i++){
        if (vetor[i] == 30){
            count30++;
        }
        if (vetor[i] > media){
            countMaiorMedia++;
        }
        if (vetor[i] == media){
            countIgualMedia++;
        }
    }
    printf("Quantidade de números iguais a 30: %d\n", count30);
    printf("Quantidade de números maiores que a média: %d\n", countMaiorMedia);
    printf("Quantidade de números iguais à média: %d\n", countIgualMedia);
    return 0;
}