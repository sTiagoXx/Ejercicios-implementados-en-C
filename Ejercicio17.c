#include <stdio.h>

int main() {
  int edad;
  float ingresos;

  printf("Ingrese su edad: ");
  scanf("%d", &edad); // Leemos la edad del usuario

  printf("Ingrese sus ingresos mensuales: ");
  scanf("%f", &ingresos); // Leemos los ingresos mensuales del usuario

  // Verificamos si el usuario cumple con las condiciones para tributar
  if (edad >= 16 && ingresos >= 1000) {
    printf("Usted debe tributar.\n"); // Si tiene al menos 16 años y gana 1000 o
                                      // más, debe tributar
  } else {
    printf("Usted no está obligado a tributar.\n"); // Si no cumple las
                                                    // condiciones, no está
                                                    // obligado a tributar
  }

  return 0; // El programa termina correctamente
}