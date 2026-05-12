#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura; // altura em metros
    printf ("Digite sua altura: ");
    scanf ("%f" ,&altura);

    float peso_ideal;

    peso_ideal = (72.7 * altura) - 58;

    printf("\nAltura: %.2f m\n", altura);
    printf("Peso ideal: %.2f kg\n\n", peso_ideal);

    return 0;
}