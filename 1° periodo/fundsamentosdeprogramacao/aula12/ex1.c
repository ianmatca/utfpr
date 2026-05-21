/**
 * @file ex1.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-05-19
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*1)Crie uma matriz identidade com dimensões 5 x 5*/

 #include <stdio.h>
 #include <stdlib.h>

 int main(){
     int matriz[5][5];

     for(int i = 0; i < 5; i++){
         for(int j = 0; j < 5; j++){
             if(i == j){
                 matriz[i][j] = 1;
             }/*if */ else {
                 matriz[i][j] = 0;
             }//else
         }//for
     }//for

     printf("Matriz Identidade 5x5:\n");
     for(int i = 0; i < 5; i++){
         for(int j = 0; j < 5; j++){
             printf("%d ", matriz[i][j]);
         }//for
         printf("\n");
     }//for

     return 0;
 }//main