/**
 * @file ex6.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-07
 * 
 * @copyright Copyright (c) 2026
 * 
 */
/*Faça um programa que receba 10 números e calcule o quadrado desse número (um de cada vez)*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    for (int i = 1; i <= 10; i++){
        printf("Digite o numero %d: ", i);
        scanf("%d", &num);
        printf("O quadrado de %d é %d\n", num, num * num);
    }//for
    return 0;
}//main