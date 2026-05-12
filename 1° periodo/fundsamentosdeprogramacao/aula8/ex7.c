/**
 * @file ex7.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-23
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*7) Faça um programa que calcule o fatorial de um número a ser digitado.
 */

#include <stdio.h>
#include <math.h>

int main(){
    int fatnum, fatorial = 1;

    printf("Digite um número a ser fatorado: ");
    scanf("%d", &fatnum);

    while (fatnum > 1) // Teoricamente ele multiplica o 1, mas para poupar processamento, o index nao chega a fazer essa operação com 1
    {
        fatorial = fatorial * fatnum; // 5! = 5 * 4 * 3 * 2 * 1
        index--;
    }

    printf("O fatorial é %d\n", fatorial);
    return 0;
}
