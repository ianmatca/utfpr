/**
 * @file ex3.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*3) Desenvolva um programa que armazene o nome e o
telefone de 5 pessoas. Ao digitar a posição desejada, o
programa deve exibir o nome e telefone daquela posição. O
programa finaliza ao receber a entrada -1.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char nomes[5][50]; // Vetor para armazenar 5 nomes, cada nome com até 49 caracteres + '\0'
    char telefones[5][20]; // Vetor para armazenar os telefones dos contatos

    printf("Digite o nome e telefone de 5 pessoas:\n");
    for(int i = 0; i < 5; i++){
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: ");
        fgets(nomes[i], sizeof(nomes[i]), stdin); // Lê o nome do usuário
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; // Remove o caractere de nova linha

        printf("Telefone: ");
        fgets(telefones[i], sizeof(telefones[i]), stdin); // Lê o telefone do usuário
        telefones[i][strcspn(telefones[i], "\n")] = '\0'; // Remove o caractere de nova linha
    }//for

    int posicao;
    while(1){
        printf("\nDigite a posição (0-4) para exibir o contato ou -1 para sair: ");
        scanf("%d", &posicao);

        if(posicao == -1){
            break; // Encerra o programa se a entrada for -1
        } else if(posicao >= 0 && posicao < 5){
            printf("Contato na posição %d:\n", posicao);
            printf("Nome: %s\n", nomes[posicao]);
            printf("Telefone: %s\n", telefones[posicao]);
        } else {
            printf("Posição inválida. Tente novamente.\n");
        }
    }//while

    return 0;
}//main