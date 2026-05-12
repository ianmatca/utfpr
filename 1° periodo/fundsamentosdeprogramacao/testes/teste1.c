#include <stdio.h>
#include <locale.h>

int main() {
    // Configura para acentuação em português
    setlocale(LC_ALL, "");

    double montante, taxa = 0.01; // 1%
    int meses;

    printf("\nDigite o valor inicial: ");
    scanf("%lf", &montante);

    printf("Digite o número de meses: ");
    scanf("%d", &meses);

    // Loop para adicionar 1% ao mês (Juros Compostos)
    for (int i = 1; i <= meses; i++) {
        montante += montante * taxa; // Adiciona 1% ao valor atual
        printf("\nMês %d: %.2f\n", i, montante);
    }

    printf("\nValor final após %d meses: %.2f\n\n", meses, montante);

    return 0;
}