/**
 * @file ex9.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-09
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*Desenvolva um programa que receba um numero tamanho e exiba um quadrado de tamanho tamanho utilizando o carácter  #

Digite o tamanho: 5
#####
#####
#####
#####
#####

Dica: Para a exibição utilize apenas os comandos
printf(“#”);  e  printf(“\n”);*/

int main(){
    int tamanho;
    printf ("\nDigite o tamanho do quadrado: ");
    scanf("%d", &tamanho);
    for (int i = 1; i <= tamanho; i++){
        for (int j = 1; j <= tamanho; j++){
            printf("#");
        }//for
        printf("\n");
    }//for
    return 0;
}//main