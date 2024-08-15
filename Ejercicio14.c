#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char contraseña[] = "micontraseña"; // Contraseña guardada en la variable
  char input[20]; // Array para almacenar la entrada del usuario

  printf("Introduce la contraseña: ");
  fgets(input, 20, stdin); // Leer la entrada del usuario

  // Eliminar el carácter de fin de línea (\n) que se agrega al final de la
  // entrada del usuario
  input[strcspn(input, "\n")] = 0;

  int coincide = 1; // Bandera que indica si la contraseña coincide

  // Comprobamos carácter por carácter si la contraseña ingresada coincide con
  // la guardada
  for (int i = 0; i < strlen(contraseña); i++) {
    // Convertimos ambos caracteres a minúscula para hacer una comparación
    // insensible a mayúsculas/minúsculas
    if (tolower(input[i]) != tolower(contraseña[i])) {
      coincide = 0; // Si hay alguna diferencia, la contraseña no coincide
      break;        // Salimos del ciclo si no coinciden
    }
  }

  // Mostramos un mensaje dependiendo de si la contraseña coincide o no
  if (coincide) {
    printf("La contraseña es correcta.\n");
  } else {
    printf("La contraseña es incorrecta.\n");
  }

  return 0; // El programa termina correctamente
}