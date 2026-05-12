/**
 * @file ex9.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-23
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*Faça um programa que simule um jogo, onde o usuário deverá descobrir um número aleatório escolhido pelo computador (de 1 a 100).
O usuário poderá realizar até 6 tentativas, o programa deverá retornar as mensagens “muito alto”, “muito baixo” até o usuário acertar o número ou esgotar o número máximo de tentativas

Dica: Pesquise sobre como gerar um numero aleatório  utilizando a função rand da biblioteca math.h
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int computadorNum, choiceNum;
    int chances = 6;

    srand(time(NULL)); // srand() é utilizado para atribuir valores distintos a cada rand(), o time(NULL) é utilizado como seed
    computadorNum = (rand() % 100) + 1; // O "% 100" define o valor máximo, o "+ 1" atribui um valor mínimo

    while (chances > 0) {
        printf("Digite seu chute: ");
        scanf("%d", &choiceNum);

        if (userNum == computadorNum) {
            printf("Parabéns! O computador havia escolhido %d.\n", computadorNum);
            return 0;
        }
        else if (choiceNum > computadorNum)
            printf("O computador escolheu um número menor.\n");
            else
        printf("O computador escolheu um número maior.\n");

        chances--;
    }

    printf("Acabaram as chances, o número era %d.\n", computadorNum);

    return 0;
}
