/**
 * @file ex5.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*5) Faça um programa que receba uma frase e depois exiba quantas vezes
cada vogal aparece. Ele deve contar considerando o tamanho da String.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char frase[1000]; // Vetor para armazenar a frase do usuário
    int contagem[5] = {0}; // Vetor para contar as vogais (a, e, i, o, u)

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin); // Lê a frase do usuário
    frase[strcspn(frase, "\n")] = '\0'; // Remove o caractere de nova linha

    for(int i = 0; i < strlen(frase); i++){
        char c = tolower(frase[i]); // Converte o caractere para minúsculo
        switch(c){
            case 'a':
                contagem[0]++;
                break;
            case 'e':
                contagem[1]++;
                break;
            case 'i':
                contagem[2]++;
                break;
            case 'o':
                contagem[3]++;
                break;
            case 'u':
                contagem[4]++;
                break;
        }//switch
    }//for

    printf("\nContagem de vogais:\n");
    printf("A: %d\n", contagem[0]);
    printf("E: %d\n", contagem[1]);
    printf("I: %d\n", contagem[2]);
    printf("O: %d\n", contagem[3]);
    printf("U: %d\n", contagem[4]);

    return 0;
}//main