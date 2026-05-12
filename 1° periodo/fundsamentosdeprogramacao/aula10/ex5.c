/**
 * @file ex5.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-07
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*Faça um programa que calcule o fatorial de um número a ser digitado.*/

 #include <stdio.h>
 #include <stdlib.h>

int main(){
    int n;
    long long int fatorial = 1;//usei o long long int para suportar o fatorial de números maiores, pois o int pode estourar facilmente
    printf("Digite um numero: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        fatorial *= i;
        printf("O fatorial de %d é %lld \n", n, fatorial);
    }//for

return 0;
}//main