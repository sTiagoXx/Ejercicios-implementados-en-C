#include <stdio.h>

int main() {
  float resultado;

  // Calculamos el resultado de ((3+2)/25)^2
  resultado = (3 + 2) / 25.0;
  resultado = resultado * resultado; // Elevamos al cuadrado

  // Mostramos el resultado por pantalla
  printf("El resultado de ((3+2)/25)^2 es: %f\n", resultado);

  return 0;
}