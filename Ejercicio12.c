#include <stdio.h>

int main() {
  int barras_vendidas;
  float precio_habitual = 3.49;
  float descuento = 0.60;
  float precio_final;

  // Pide al usuario que introduzca el número de barras de pan vendidas que no
  // son frescas
  printf("Ingrese el número de barras de pan vendidas que no son del día: ");
  scanf("%d", &barras_vendidas);

  // Muestra el precio habitual y el descuento aplicado
  printf("Precio habitual de una barra de pan: $%.2f\n", precio_habitual);
  printf("Descuento por no ser fresca: $%.2f\n", descuento);

  // Calcula el costo final con el descuento aplicado
  precio_final = (precio_habitual - descuento) * barras_vendidas;
  printf("Coste final total: $%.2f\n", precio_final);

  return 0; // Indica que el programa terminó correctamente
}