/**
 * @file ex4.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.*/

 #include <stdio.h>
 #include <stdlib.h>
    
  int main () {
  int contador = 240;
  while (contador <= 730) {
  if (contador % 2 == 0) { 
  printf("%d ", contador);
  } 
  contador++;
  }
 return 0;
}