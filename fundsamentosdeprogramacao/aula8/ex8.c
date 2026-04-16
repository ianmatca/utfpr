/**
 * @file ex8.c
 * @author Ian Matsumoto Cabral (ianmatsumoto@alunos.utfpr.edu.br)
 * 2873966
 * @version 0.1
 * @date 2026-04-16
 * 
 * @copyright Copyright (c) 2026
 * 
 */
 /*8) Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:
 A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
 A segunda opção imprime “Teste2” e mostra o menu novamente.
 A terceira opção finaliza o programa.
 Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
mostrar o menu novamente.*/

int main () {
    int opcao;
    printf("Menu do programa:\n");
    printf("1 - Teste 1\n");
    printf("2 - Teste 2\n");
    printf("3 - Sair do programa\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
        while (opcao !=3) {
           switch (opcao) {
            case 1:
                printf("Teste 1\n\n");
                break;
            case 2:
                printf("Teste 2\n\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n\n");
                break;
           }
    printf("Menu do programa:\n");
    printf("1 - Teste 1\n");
    printf("2 - Teste 2\n");
    printf("3 - Sair do programa\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
        }
        printf("Programa finalizado.\n");
    return 0;
}