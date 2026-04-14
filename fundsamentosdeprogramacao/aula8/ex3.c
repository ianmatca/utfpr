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
    int contador = 1;
    while (contador <= 322) {
      if (contador % 3 == 0) {
        printf("%d ", contador);
      }
      contador++;
    }
    return 0;
  }