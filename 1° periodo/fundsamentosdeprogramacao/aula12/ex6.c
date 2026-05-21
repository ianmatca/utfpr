/**
 * @file ex6.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /* Multiplicação de matrizes
 Condição: o número de colunas da matriz da esquerda é o mesmo número de
linhas da matriz da direita
 Se A é uma matriz m por n e D é uma matriz n por p, então seu produto AD é a
matriz m por p (m linhas e p colunas)
 Fórmula: ADx,y = Ax,0D0,y + Ax,1D1,y + Ax,2D2,y + Ax,3D3,y.…
 Exercício 6 ) Faça um programa que multiplique as matrizes A e D
abaixo gerando matriz AD*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrizA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrizD[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int matrizAD[2][2];

    // Multiplicação de matrizes
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrizAD[i][j] = 0; // Inicializa o elemento AD[i][j]
            for(int k = 0; k < 3; k++){
                matrizAD[i][j] += matrizA[i][k] * matrizD[k][j]; // ADx,y = Ax,0D0,y + Ax,1D1,y + Ax,2D2,y
            }//for
        }//for
    }//for

    // Imprime a matriz resultante AD
    printf("Matriz AD (A multiplicada por D):\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", matrizAD[i][j]);
        }//for
        printf("\n");
    }//for

    return 0;
}//main