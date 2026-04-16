/**
 * @file ex3.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*3) Crie um algoritmo que exiba todos os números múltiplos
de 3 no intervalo de 1 a 322.*/

  #include <stdio.h>
  #include <stdlib.h>

  int main () {
    int contamult3 = 1;
    while (contamult3 <= 322) {
      if (contamult3 % 3 == 0) {
        printf("%d ", contamult3);
      }
      contamult3++;
    }
    return 0;
  }