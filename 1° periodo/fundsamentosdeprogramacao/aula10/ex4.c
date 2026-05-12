/**
 * @file ex4.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-07
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*Crie um algoritmo que exiba todos os números pares entre 240 e 730 inclusive.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    for (int i = 240; i <=730; i++){
        if (i % 2 == 0){//par
            printf("%d \n", i);
        }//if
    }//for
return 0;
}//main