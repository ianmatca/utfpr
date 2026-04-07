/**
 * @file ex_2.c
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
    
    int contador = 10;

    contador++; //esse operador foi criado para facilitar, para não precisar ficar escrevendo contador = contador + 1, para subtração é contador--
    printf("O contador é %d\n",contador);
    contador++;
    printf("O contador é %d\n",contador);
    contador++;
    printf("O contador é %d\n",contador);

    return 0;
 }