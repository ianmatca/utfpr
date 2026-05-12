/**
 * @file ex5.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
/*5) Crie um algoritmo que exiba todos os números ímpares
entre 100 e 200 inclusive.*/

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