#include <stdio.h>

int main() {
  int n;
  // Pide al usuario que introduzca un número entero positivo
  printf("Introduce un entero positivo: ");
  scanf("%d", &n);

  // Verifica si el número es negativo o cero
  if (n <= 0) {
    printf("Error: el número debe ser positivo.\n");
    return 1; // Termina el programa con un código de error
  }

  // Calcula la suma de los primeros n números enteros
  int suma = (n * (n + 1)) / 2;
  printf("La suma de los primeros %d enteros positivos es: %d\n", n, suma);

  return 0; // Indica que el programa terminó correctamente
}