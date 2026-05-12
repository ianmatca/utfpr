/**
 * @file ex3.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-07
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*Crie um algoritmo que exiba todos os números múltiplos de 5 no intervalo de 1 a 500.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    for (int i = 1; i <=500; i++){
        if (i % 5 == 0){
            printf("%d \n", i);
        }//if
    }//for
return 0;
}//main