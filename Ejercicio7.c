#include <stdio.h>

int main() {
  float peso, altura, masaCorporal;

  // Pide al usuario que introduzca su peso
  printf("Introduce tu peso: ");
  scanf("%f", &peso);

  // Pide al usuario que introduzca su estatura
  printf("Introduce tu estatura: ");
  scanf("%f", &altura);

  // Calcula el índice de masa corporal (IMC)
  masaCorporal = peso / (altura * altura);

  // Muestra el IMC calculado en la pantalla
  printf("Su índice de masa corporal es: %.2f\n", masaCorporal);

  return 0; // Indica que el programa terminó correctamente
}