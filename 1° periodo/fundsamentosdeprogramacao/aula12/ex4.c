/**
 * @file ex4.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /* Multiplicando uma matriz por um escalar
 Uma matriz C é criada com seus elementos gerados a partir da
multiplicação de cada célula da matriz A pelo número escalar
C x,y = A x,y * escalar
 Exercício 4) Faça um programa que multiplique por 5 a
matriz A (preenchida a partir do teclado) para gerar a
matriz C.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrizA[3][3];
    int matrizC[3][3];
    int escalar = 5;

    printf("Digite os elementos da matriz A 3x3:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrizA[i][j]);
            matrizC[i][j] = matrizA[i][j] * escalar; // Multiplicação por escalar
        }//for
    }//for

    printf("Matriz C (A multiplicada por %d):\n", escalar);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrizC[i][j]);
        }//for
        printf("\n");
    }//for

    return 0;
}//main