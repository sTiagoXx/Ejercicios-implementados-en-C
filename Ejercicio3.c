#include <stdio.h>

int main() {
  char nombre[50]; // Declara una cadena para almacenar el nombre del usuario

  // Pide al usuario que ingrese su nombre
  printf("¿Cuál es tu nombre?\n");
  scanf("%s", nombre); // Lee el nombre ingresado por el usuario

  // Saluda al usuario usando el nombre que ingresó
  printf("¡Hola %s!\n", nombre);

  return 0; // Indica que el programa terminó correctamente
}