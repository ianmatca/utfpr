/**
 * @file aula4.c
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
 
 int main (){
    int a = 10;
    int b = 3;
    int soma;
    int subtracao; //evitar encurtar nome de varial grande, depois é so digitar um pouco que ela se preenche sozinha no codigo
    int multiplicacao;
    int divisao; //para essa  conta não ser um numero interio é necessario colocar um dos dois numeros que esta dividindo na varialve float, não mudar a variavel divisão

   
    soma = a + b; 
    printf ("Soma: %d\n", soma);

    subtracao = a - b;
    printf ("Subtracao: %d\n", subtracao);

    multiplicacao = a * b; 
    printf ("Multiplicacao: %d\n", multiplicacao);

    divisao = (float)a / b; //caso não queira mudar a variavel la encima use o chamado casting colocando umaa varialvel entre antes do calculo
    printf ("Divisao: %f\n", divisao);

    return 0;
 }