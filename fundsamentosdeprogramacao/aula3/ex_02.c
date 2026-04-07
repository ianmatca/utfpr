/**   
 * @file aula3_exercicio2.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * @brief 
 * @version 0.1
 * @date 2026-03-24
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A;
    int B;
    int temp; //essa variavel foi colocada para que o computador consiga fazer a conta ao inves de so trocar o numero da minha varialve A e B
    A = 30;
    B = 45;

    printf ("\nValores Iniciais: \nA:%i\nB:%i\n\n",A,B);
    printf  ("Pressione Enter");
    getchar();

    temp = A;
    A = B;
    B = temp;

    printf ("\nValores Finas: \nA:%i\nB:%i\n\n",A,B);
    return 0;
}