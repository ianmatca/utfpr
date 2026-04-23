 /*1) Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário. */

int main(){
    int contAluno =1 , contNota =1;
    float nota = 0;
    float media = 0;
    float somaNotas = 0;
        do{
            printf("Digite a nota 1 do aluno %d: ", contNota, contAluno);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10)
                printf("Nota inválida, tente novamente.\n");
        } while (nota < 0 || nota > 10);
        do{
            printf("Digite a nota 2 do aluno %d: ", contNota, contAluno);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10)
                printf("Nota inválida, tente novamente.\n");
        } while (nota < 0 || nota > 10);
        
    return 0;
}