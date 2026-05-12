/**
 * @file ex8.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-09
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*Utilizando a estrutura do laço for aninhado, crie um programa que exiba a tabuada de todos os números  de 1 a 10 no seguinte formato:

Tabuada do 1:
1 x 1 =  1
1 x 2 =  2
1 x 3 =  3
...

Tabuada do 5:
5 X 1 =  5
5 X 2 = 10
5 X 3 = 15
...*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    printf ("Digite um numero que deseja ver a tabuada: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        printf("Tabuada do %d: \n", i);
        for (int j = 1; j <= 10; j++){
            printf("%d x %d = %2d\n", i, j, i * j);
        }//for
        printf("\n");
    }//for
    return 0;
}//main