/**
 * @file teste7.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-01
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, n3, n4, media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);

    printf("Digite o quarto numero: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("Media: %.2f\n", media);

    return 0;
}