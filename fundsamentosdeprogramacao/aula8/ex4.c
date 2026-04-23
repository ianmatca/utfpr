/**
 * @file ex4.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int contapar = 240;

    while (contapar <= 730)
    {
        if (contapar % 2 == 0) // Os números cujo a divisão por 2 tem resto 0 são seus múltiplos, logo, pares
            printf("%d\n", contapar);
        contapar++;
    }
    return 0;
}