/**
 * @file ex2.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*2) Faça um programa que armazene o nome e salário de 5
empregados. Em seguida calcule um aumento de 8% nos
salários e exiba a nova folha de pagamentos.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char nomes[5][50]; // Vetor para armazenar 5 nomes, cada nome com até 49 caracteres + '\0'
    float salarios[5]; // Vetor para armazenar os salários dos empregados

    printf("Digite o nome e salário de 5 empregados:\n");
    for(int i = 0; i < 5; i++){
        printf("Empregado %d:\n", i + 1);
        printf("Nome: ");
        fgets(nomes[i], sizeof(nomes[i]), stdin); // Lê o nome do usuário
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; // Remove o caractere de nova linha

        printf("Salário: ");
        scanf("%f", &salarios[i]); // Lê o salário do usuário
        getchar(); // Limpa o buffer de entrada
    }//for

    printf("\nFolha de Pagamentos com Aumento de 8%%:\n");
    for(int i = 0; i < 5; i++){
        float novo_salario = salarios[i] * 1.08; // Calcula o novo salário com aumento de 8%
        printf("%s: R$ %.2f\n", nomes[i], novo_salario); // Imprime o nome e o novo salário
    }//for

    return 0;
}//main