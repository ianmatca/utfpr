/**
 * @file ex2.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*2) Faça um algoritmo que exiba todos números de 100 a 1.*/

  #include <stdio.h>
  #include <stdlib.h>

  int main () {
    int contasoma = 100;
    while (contasoma >= 1) {
      printf("%d ", contasoma);
      contasoma--;
    }
    return 0;
  }