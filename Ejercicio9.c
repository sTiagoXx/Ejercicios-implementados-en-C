#include <math.h>
#include <stdio.h>

int main() {
  float cantidad, interes, años, capital_final;

  // Pide al usuario que introduzca los datos
  printf("Ingrese la cantidad a invertir: ");
  scanf("%f", &cantidad);

  printf("Ingrese la tasa de interés anual (en porcentaje): ");
  scanf("%f", &interes);

  printf("Ingrese el número de años: ");
  scanf("%f", &años);

  // Convierte la tasa de interés a un valor decimal
  interes /= 100;

  // Calcula el capital final utilizando la fórmula de interés compuesto
  capital_final = cantidad * pow(1 + interes, años);

  // Muestra el capital final calculado en la pantalla
  printf("El capital final después de %.0f años es: %.2f\n", años,
         capital_final);

  return 0; // Indica que el programa terminó correctamente
}