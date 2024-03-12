#include <stdio.h>

// Función para convertir de quetzales a dólares
float quetzales_a_dolares(float cantidad_quetzales) {
    // Tasa de cambio: 1 quetzal = 0.13 dólares
    return cantidad_quetzales * 0.13;
}

// Función para convertir de quetzales a euros
float quetzales_a_euros(float cantidad_quetzales) {
    // Tasa de cambio: 1 quetzal = 0.11 euros
    return cantidad_quetzales * 0.11;
}

// Función para convertir de euros a dólares
float euros_a_dolares(float cantidad_euros) {
    // Tasa de cambio: 1 euro = 1.12 dólares
    return cantidad_euros * 1.12;
}

int main() {
    float cantidad_quetzales, cantidad_euros, cantidad_dolares;

    // Leer la cantidad de quetzales
    printf("Ingrese la cantidad de quetzales: ");
    scanf("%f", &cantidad_quetzales);

    // Convertir quetzales a dólares y mostrar el resultado
    cantidad_dolares = quetzales_a_dolares(cantidad_quetzales);
    printf("%.2f quetzales son %.2f dólares.\n", cantidad_quetzales, cantidad_dolares);

    // Convertir quetzales a euros y mostrar el resultado
    cantidad_euros = quetzales_a_euros(cantidad_quetzales);
    printf("%.2f quetzales son %.2f euros.\n", cantidad_quetzales, cantidad_euros);

    // Leer la cantidad de euros
    printf("Ingrese la cantidad de euros: ");
    scanf("%f", &cantidad_euros);

    // Convertir euros a dólares y mostrar el resultado
    cantidad_dolares = euros_a_dolares(cantidad_euros);
    printf("%.2f euros son %.2f dólares.\n", cantidad_euros, cantidad_dolares);

    return 0;
}