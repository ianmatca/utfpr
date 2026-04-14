/**
 * @file teste6.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * @brief 
 * @version 0.1
 * @date 2026-04-01
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float total_vendido, comissao, salario_base = 1200.0, salario_bruto;

    printf("Digite o total vendido no mes: ");
    scanf("%f", &total_vendido);

    comissao = total_vendido * 0.10;

    salario_bruto = salario_base + comissao;

    printf("Comissao: R$ %.2f\n", comissao);
    printf("Salario bruto: R$ %.2f\n", salario_bruto);

    return 0;
}