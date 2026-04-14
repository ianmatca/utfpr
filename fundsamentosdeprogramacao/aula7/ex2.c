/**
 * @file ex2.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /**2) Crie uma calculadora usando a instrução switch, que
pergunte qual das operações básicas quer fazer (+, -, *
e /), em seguida peça os dois números e mostre o
resultado da operação matemática entre eles. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    printf("Calculadora Simples\n");
    printf("Escolha a operação (+, -, *, /): ");
    scanf("%c", &operacao);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Operação inválida. Por favor, escolha +, -, * ou /.\n");
    }

    return 0;
}