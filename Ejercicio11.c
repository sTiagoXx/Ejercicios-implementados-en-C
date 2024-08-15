#include <math.h>
#include <stdio.h>

int main() {
  float cantidad_inicial, interes_anual, cantidad_final;
  int año;

  // Pide al usuario que introduzca la cantidad inicial a depositar
  printf("Ingrese la cantidad inicial a depositar: ");
  scanf("%f", &cantidad_inicial);

  // Establece una tasa de interés anual fija
  interes_anual = 0.04;

  // Calcula y muestra el saldo para cada uno de los tres años
  for (año = 1; año <= 3; año++) {
    cantidad_final = cantidad_inicial * pow(1 + interes_anual, año);
    printf("Saldo después de %d año(s): %.2f\n", año, cantidad_final);
    // Actualiza la cantidad inicial para el siguiente año
    cantidad_inicial = cantidad_final;
  }

  return 0; // Indica que el programa terminó correctamente
}