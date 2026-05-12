/**
 * @file ex3.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*3) Crie um algoritmo que exiba todos os números múltiplos
de 3 no intervalo de 1 a 322.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int mult3 = 1;

    while (mult3 <= 322)
    {
        if (mult3 % 3 == 0) // Os números cujo a divisão por 3 tem resto 0 são seus múltiplos
            printf("%d\n", mult3);
        mult3++;
    }
    return 0;
}
