#include <stdio.h>

int main() {
  int numero;

  printf("Introduce un número entero: ");
  scanf("%d", &numero); // Leemos un número entero ingresado por el usuario

  // Comprobamos si el número es par o impar
  if (numero % 2 == 0) {
    printf("El número %d es par.\n", numero); // Si es divisible por 2, es par
  } else {
    printf("El número %d es impar.\n",
           numero); // Si no es divisible por 2, es impar
  }

  return 0; // El programa termina correctamente
}