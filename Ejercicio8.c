#include <stdio.h>

int main() {
  int n, m, c, r;

  // Pide al usuario que introduzca dos números enteros
  printf("Introduzca el primer número entero: ");
  scanf("%d", &n);

  printf("Introduzca el segundo número entero: ");
  scanf("%d", &m);

  // Realiza la división entera y obtiene el cociente y el resto
  c = n / m;
  r = n % m;

  // Muestra el cociente y el resto en la pantalla
  printf("La división de %d entre %d da un cociente de %d y un resto de %d\n",
         n, m, c, r);
  return 0; // Indica que el programa terminó correctamente
}