/**
 * @file ex6.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*6) Faça um programa que receba um nome e um sobrenome. Ele deve
construir uma nova string no formato americano (Sobrenome, Nome)
Exemplo: Silva, José*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char nome[50]; // Vetor para armazenar o nome do usuário
    char sobrenome[50]; // Vetor para armazenar o sobrenome do usuário
    char nome_completo[100]; // Vetor para armazenar o nome completo no formato americano

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin); // Lê o nome do usuário
    nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha

    printf("Digite o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin); // Lê o sobrenome do usuário
    sobrenome[strcspn(sobrenome, "\n")] = '\0'; // Remove o caractere de nova linha

    // Constrói a string no formato americano (Sobrenome, Nome)
    snprintf(nome_completo, sizeof(nome_completo), "%s, %s", sobrenome, nome);

    printf("Nome no formato americano: %s\n", nome_completo);

    return 0;
}//main