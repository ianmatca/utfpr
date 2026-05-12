/**
 * @file ex7.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-07
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*Faça um programa que mostre n elementos da sequência de Fibonacci.
O valor de n é passado para o programa.
O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir a fórmula tn = tn-1 + tn-2


Obs.: Assista ao video do moodle para entender a sequência
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int t1 = 0;
    int t2 = 1;
    int tn;

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf ("Sequência de Fibonacci: ");
    for (int i = 1; i <= n; i++) {

        if (i == 1) {
            printf("%d ", t1);
        }/*if*/ else if (i == 2) {
            printf("%d ", t2);
        }/*else if*/ else {
            tn = t1 + t2;
            printf("%d ", tn);
            t1 = t2;
            t2 = tn;
        }//else
    }//for
    return 0;
}//main