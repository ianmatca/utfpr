/**
 * @file ex1.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * Exercicio 1 - Aula 9
 * @version 0.1
 * @date 2026-04-23
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*1) Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int contAluno = 1, contNota = 1;
    float nota;
    float media;
    float somaNotas;

    do {
        somaNotas = 0;
        contNota = 1;

        printf("\nAluno %d\n", contAluno);

        do {
            do {
                printf("Digite a nota %d (0 a 10): ", contNota);
                scanf("%f", &nota);

                if(nota < 0 || nota > 10) {
                    printf("Nota invalida! Digite novamente.\n");
                }
            } while(nota < 0 || nota > 10);

            somaNotas += nota;
            contNota++;

        } while(contNota <= 2);

        media = somaNotas / 2;
        printf("Media do aluno %d: %.2f\n", contAluno, media);

         if (media >= 7) {
        printf("Aluno aprovado!\n");
         } else {
        printf("Aluno reprovado!\n");
          }

        contAluno++;

    } while(contAluno <= 5);


    return 0;
}