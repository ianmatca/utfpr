/**
 * @file ex5.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /* Somando/Subtraindo duas matrizes
 Para somar/subtrair 2 matrizes A e B, ambas devem ter o mesmo número
de linhas e colunas (mesma ordem). A matriz resultante C tem a mesma
ordem.
 A soma/subtração ocorre entre os elementos correspondentes da célula A
com a célula B ( mesma coordenada)
Cx,y = Ax,y ± Bx,y
 Exercício 5) Faça um programa que some as matrizes A e B,
gerando C*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizC[3][3];

    printf("Digite os elementos da matriz A 3x3:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrizA[i][j]);
        }//for
    }//for

    printf("Digite os elementos da matriz B 3x3:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrizB[i][j]);
        }//for
    }//for

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j]; // Soma das matrizes
        }//for
    }//for

    printf("Matriz C (A + B):\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrizC[i][j]);
        }//for
        printf("\n");
    }//for

    return 0;
}//main