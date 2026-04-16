/**
 * @file ex5.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-14
 * 
 * @copyright Copyright (c) 2026
 * 
/*5) Crie um algoritmo que exiba todos os números ímpares
entre 100 e 200 inclusive.*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int contaimpar = 100;
    while (contaimpar <= 200) {
        if (contaimpar % 2 != 0) 
            printf("%d ", contaimpar);
    
        contaimpar++;
    }
    return 0;
}