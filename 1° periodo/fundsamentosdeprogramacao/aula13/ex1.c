//**
 * @file ex1.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*1) Crie um programa para armazenar 10 nomes em um vetor
e imprimir uma lista numerada*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char nomes[10][50]; // Vetor para armazenar 10 nomes, cada nome com até 49 caracteres + '\0'

    printf("Digite 10 nomes:\n");
    for(int i = 0; i < 10; i++){
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin); // Lê o nome do usuário
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; // Remove o caractere de nova linha
    }//for

    printf("\nLista de Nomes:\n");
    for(int i = 0; i < 10; i++){
        printf("%d. %s\n", i + 1, nomes[i]); // Imprime a lista numerada
    }//for

    return 0;
}//main