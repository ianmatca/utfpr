/**
 * @file ex4.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*4) Faça um programa que receba um nome, ele deve perguntar
novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber
um nome com 5 caracteres ou mais o programa exibe o nome e finaliza.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char nome[100]; // Vetor para armazenar o nome do usuário

    while(1){
        printf("Digite um nome (5 caracteres ou mais): ");
        fgets(nome, sizeof(nome), stdin); // Lê o nome do usuário
        nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha

        if(strlen(nome) >= 5){
            printf("Nome válido: %s\n", nome);
            break; // Encerra o loop se o nome tiver 5 caracteres ou mais
        } else {
            printf("Nome inválido. Tente novamente.\n");
        }
    }//while

    return 0;
}//main