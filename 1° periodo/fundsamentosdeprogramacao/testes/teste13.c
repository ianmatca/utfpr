/**
 * @file teste13.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-09
 * 
 * @copyright Copyright (c) 2026
 * 
 */
/* 1) Crie um programa que forneça um menu com duas
opções. Caso o usuário digite 1, o programa solicitará um
número e verificará se o valor é par ou impar. Caso o
usuário digite 2, o programa solicitará uma idade e
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:*/

#include <stdio.h>  
#include <stdlib.h> 

int main() {
    int opcao;
    int numero;
    int idade;

    printf("Menu:\n");
    printf("1. Verificar se um número é par ou ímpar\n"); 
    printf("2. Verificar se uma pessoa é maior ou menor de idade\n");
    printf("Digite a opção desejada (1 ou 2): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite um número: ");
            scanf("%d", &numero);
            if (numero % 2 == 0) {
                printf("O número %d é par.\n", numero);
            } else {
                printf("O número %d é ímpar.\n", numero);
            }
            break;
        case 2:
            printf("Digite a idade: ");
            scanf("%d", &idade);
            if (idade >= 18) {
                printf("A pessoa é maior de idade.\n");
            } else {
                printf("A pessoa é menor de idade.\n");
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha 1 ou 2.\n");
    }
    return 0;
}
