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
 /*4) Faça um programa que calcule o imposto de renda a ser
pago tendo como entrada o salário de um empregado. O
imposto deve ser calculado da seguinte maneira:
imposto = salário x alíquota – parcela da dedução*/

 #include <stdio.h>
 #include <stdlib.h>

int main() {
    float salario, imposto, aliquota, deducao;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 1903.98) {
        aliquota = 0;
        deducao = 0;
    } else if (salario <= 2826.65) {
        aliquota = 0.075;
        deducao = 142.80;
    } else if (salario <= 3751.05) {
        aliquota = 0.15;
        deducao = 354.80;
    } else if (salario <= 4664.68) {
        aliquota = 0.225;
        deducao = 636.13;
    } else {
        aliquota = 0.275;
        deducao = 869.36;
    }

    imposto = (salario * aliquota) - deducao;

    if (imposto < 0) {
        imposto = 0;
    }

    printf("Imposto de renda: R$ %.2f\n", imposto);

    return 0;
}