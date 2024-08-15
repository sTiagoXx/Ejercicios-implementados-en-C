#include <stdio.h>

int main() {
  int edad;

  printf("Ingrese su edad: ");
  // Intentamos leer un número entero del usuario
  if (scanf("%d", &edad) != 1) {
    // Si no se ingresa un número válido, mostramos un error y terminamos el
    // programa
    printf("Error: Ingrese un número entero válido para la edad.\n");
    return 1; // Salimos con un código de error
  }

  // Comprobamos si la persona es mayor de edad, menor de edad o si la edad es
  // inválida
  if (edad >= 18) {
    printf("Mayor de edad.\n"); // Si la edad es 18 o más, es mayor de edad
  } else if (edad < 0) {
    printf(
        "Edad inválida. La edad no puede ser negativa.\n"); // La edad no puede
                                                            // ser menor que 0
  } else {
    printf("No es mayor de edad.\n"); // Si la edad es menor de 18 y no
                                      // negativa, no es mayor de edad
  }

  return 0; // El programa termina correctamente
}