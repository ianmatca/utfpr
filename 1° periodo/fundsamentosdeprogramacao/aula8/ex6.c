/**
 * @file ex6.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-16
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*6) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá calcular o quadrado
de vários números e finalizar quando for digitado um número
negativo ou zero.*/

#include <stdio.h>
#include <math.h>

int main(){
    int numreal = 1;
    float num, sqrNum;

    while (numreal <= 10)
    {
        printf("(%d) - Digite um número real: ", index);
        scanf("%f", &num);
        sqrNum = pow(num, 2);

        printf("-> %.2f²=%.2f\n", num, sqrNum);

        numreal++;
    }
    return 0;
}