#include <stdio.h>

int main() {
  int edad;

  printf("Introduce la edad del cliente: ");
  scanf("%d", &edad); // Leemos la edad del cliente

  // Determinamos el precio de la entrada basado en la edad del cliente
  if (edad < 4) {
    printf("El cliente puede entrar gratis.\n"); // Si tiene menos de 4 años,
                                                 // entra gratis
  } else if (edad >= 4 && edad <= 18) {
    printf("El precio de la entrada es 5.\n"); // Si tiene entre 4 y 18 años, el
                                               // precio es 5
  } else if (edad > 18) {
    printf("El precio de la entrada es 10.\n"); // Si tiene más de 18 años, el
                                                // precio es 10
  }

  return 0; // El programa termina correctamente
}