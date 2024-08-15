#include <stdio.h>

int main() {
  float num1, num2, resultado;

  printf("Ingrese el primer número: ");
  scanf("%f", &num1); // Leemos el primer número

  printf("Ingrese el segundo número (divisor): ");
  scanf("%f", &num2); // Leemos el segundo número

  // Verificamos si el divisor es cero para evitar la división por cero
  if (num2 == 0) {
    printf("Error: No se puede dividir entre cero.\n");
  } else {
    // Si el divisor no es cero, realizamos la división
    resultado = num1 / num2;
    printf("El resultado de la división es: %.2f\n",
           resultado); // Mostramos el resultado con dos decimales
  }

  return 0; // El programa termina correctamente
}