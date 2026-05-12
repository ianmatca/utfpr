/**
 * @file teste8.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-01
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {
    float numero, raiz;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    // Cálculo da raiz quadrada
    raiz = sqrt(numero);

    printf("A raiz quadrada de %.2f é: %.2f\n", numero, raiz);

    return 0;
}