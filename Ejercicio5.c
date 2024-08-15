#include <stdio.h>

int main() {
  float horasTrabajadas, costePorHora, paga;

  // Pide al usuario que introduzca las horas trabajadas
  printf("Introduce el número de horas trabajadas: ");
  scanf("%f", &horasTrabajadas);

  // Pide al usuario que introduzca el costo por hora
  printf("Introduce el coste por hora: ");
  scanf("%f", &costePorHora);

  // Calcula la paga multiplicando las horas trabajadas por el coste por hora
  paga = horasTrabajadas * costePorHora;

  // Muestra la paga calculada en la pantalla
  printf("La paga que le corresponde es de: %.2f\n", paga);

  return 0; // Indica que el programa terminó correctamente
}
