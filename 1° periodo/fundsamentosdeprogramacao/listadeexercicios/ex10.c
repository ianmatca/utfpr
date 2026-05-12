/**
 * @file ex10.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-23
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*10) Desenvolva um programa que receba um valor de 1 a 99 e exiba o valor por extenso
Ex:
Digite um Número: 74
Valor por extenso: setenta e quatro*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Digite um número entre 1 e 99: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 99) {
        printf("Número inválido. Por favor, digite um número entre 1 e 99.\n");
        return 1;
    }

    char *unidades[] = {"", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};
    char *dezenas[] = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
    char *especial[] = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};

    if (numero >= 10 && numero < 20) {
        printf("Valor por extenso: %s\n", especial[numero - 10]);
    } else {
        int dezena = numero / 10;
        int unidade = numero % 10;

        if (dezena > 0) {
            printf("Valor por extenso: %s", dezenas[dezena]);
            if (unidade > 0) {
                printf(" e ");
            }
        }
        if (unidade > 0) {
            printf("%s\n", unidades[unidade]);
        } else {
            printf("\n");
        }
    }

    return 0;
}