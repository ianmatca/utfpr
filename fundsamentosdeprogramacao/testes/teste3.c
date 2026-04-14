#include <stdio.h>
#include <stdlibh>

int main() {
    int A = 40;
    int B = -1;

    printf("Com B = %d:\n", B);
    printf("A + B = %d\n", A + B);
    printf("A - B = %d\n", A - B);
    printf("A * B = %d\n", A * B);
    printf("A / B = %d\n", A / B);

    // Incrementa B
    B++;

    // Segunda rodada
    printf("\nApós incrementar B:\n");
    printf("Com B = %d:\n", B);
    printf("A + B = %d\n", A + B);
    printf("A - B = %d\n", A - B);
    printf("A * B = %d\n", A * B);
    printf("A / B = %d\n", A / B); // verificar com o professor por que não esta apresentando o valor dessa linha

    return 0;
}