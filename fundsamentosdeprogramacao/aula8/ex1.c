/**
 * @file ex1.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-07
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*1) Faça um algoritmo que exiba todos números de 1 a 100.*/

 #include <stdio.h>
 #include <stdlib.h>

 int main() {
  int conta100 = 1;
  while (conta100 <= 100) {
    printf("%d ", conta100);
    conta100++;
  }
  return 0;
 }