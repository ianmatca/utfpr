/**
 * @file ex7.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*7) Escreva um programa que receba uma sigla de um estado da região
Sul ou Sudeste e exiba o nome completo do estado correspondente.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char sigla[3]; // Vetor para armazenar a sigla do estado (2 caracteres + '\0')

    printf("Digite a sigla de um estado da região Sul ou Sudeste: ");
    fgets(sigla, sizeof(sigla), stdin); // Lê a sigla do usuário
    sigla[strcspn(sigla, "\n")] = '\0'; // Remove o caractere de nova linha

    if(strcmp(sigla, "SP") == 0){
        printf("São Paulo\n");
    } else if(strcmp(sigla, "RJ") == 0){
        printf("Rio de Janeiro\n");
    } else if(strcmp(sigla, "MG") == 0){
        printf("Minas Gerais\n");
    } else if(strcmp(sigla, "ES") == 0){
        printf("Espírito Santo\n");
    } else if(strcmp(sigla, "PR") == 0){
        printf("Paraná\n");
    } else if(strcmp(sigla, "SC") == 0){
        printf("Santa Catarina\n");
    } else if(strcmp(sigla, "RS") == 0){
        printf("Rio Grande do Sul\n");
    } else {
        printf("Sigla inválida. Por favor, digite uma sigla válida da região Sul ou Sudeste.\n");
    }

    return 0;
}//main