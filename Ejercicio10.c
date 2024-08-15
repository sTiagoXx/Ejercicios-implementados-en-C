#include <stdio.h>

int main() {
  int num_payasos, num_muñecas;
  float peso_total;

  // Pide al usuario que introduzca el número de payasos y muñecas vendidos
  printf("Introduzca el número de payasos vendidos: ");
  scanf("%d", &num_payasos);

  printf("Introduzca el número de muñecas vendidos: ");
  scanf("%d", &num_muñecas);

  // Calcula el peso total del paquete
  peso_total = (num_payasos * 112) + (num_muñecas * 75);

  // Muestra el peso total en la pantalla
  printf("El peso total del paquete es de %.2f g\n", peso_total);

  return 0; // Indica que el programa terminó correctamente
}