#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char nombre[50]; // Array para almacenar el nombre del usuario
  char sexo;       // Variable para almacenar el sexo del usuario

  printf("Introduce tu nombre: ");
  scanf("%49s", nombre); // Leemos el nombre del usuario

  printf("Introduce tu sexo (H/M): ");
  scanf(" %c",
        &sexo); // Leemos el sexo del usuario (H para hombre, M para mujer)

  // Convertimos el sexo a mayúscula para simplificar la comparación
  sexo = toupper(sexo);

  // Asignamos un grupo basado en el sexo y la primera letra del nombre
  if (sexo == 'M') {
    // Si el usuario es mujer
    if (nombre[0] < 'M') {
      printf("Tu grupo es A.\n"); // Si el nombre empieza con una letra antes de
                                  // M, grupo A
    } else {
      printf(
          "Tu grupo es B.\n"); // Si el nombre empieza con M o después, grupo B
    }
  } else if (sexo == 'H') {
    // Si el usuario es hombre
    if (nombre[0] > 'N') {
      printf("Tu grupo es A.\n"); // Si el nombre empieza con una letra después
                                  // de N, grupo A
    } else {
      printf("Tu grupo es B.\n"); // Si el nombre empieza con N o antes, grupo B
    }
  } else {
    // Si el sexo ingresado no es válido, mostramos un error
    printf("Sexo no válido. Debe ser H o M.\n");
    return 1; // Terminamos el programa con un código de error
  }

  return 0; // El programa termina correctamente
}