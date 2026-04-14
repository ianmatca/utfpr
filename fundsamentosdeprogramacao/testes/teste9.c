/**
 * @file teste9.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-06
 * 
 * @copyright Copyright (c) 2026
 * 
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 6) {
        printf("aprovado\n");
    } else {
        printf("reprovado\n");
    }

    return 0;
}