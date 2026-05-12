#include <stdio.h>
#include <stdlib.h>

int main() {
    float tempo_min = 35;
    float velocidade = 80; // km/h
    float consumo_km_l = 12; // km por litro

    // converter tempo para horas
    float tempo_horas = tempo_min / 60.0;

    // calcular distância
    float distancia = velocidade * tempo_horas;

    // calcular combustível gasto
    float litros = distancia / consumo_km_l;

    printf("\nCombustivel gasto: %.2f litros\n\n", litros);

    return 0;
}