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
 /**3) Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem).
 Para isso, lembre-se da fórmula de Báskara*/

 #include <stdio.h>
 #include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    printf("Digite o coeficientes A: ");
    scanf("%f", &a);

    printf("Digite o coeficiente B: ");
    scanf("%f", &b);

    printf("Digite o coeficiente C: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Nao é uma equacao do segundo grau.\n");
        return 0;
    }

    delta = sqrt (pow(b,2) - (4 * a * c));

    if (isnan(delta)) {
        printf("Nao existem raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz unica: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes: %.2f e %.2f\n", x1, x2);
    }

    return 0;
}