#include <stdio.h>

int main() {
  int opcion, ingrediente; // Variables para almacenar la opción y el
                           // ingrediente elegido
  char vegetariana; // Variable para almacenar la elección de pizza vegetariana
                    // o no

  // Preguntamos al usuario si desea una pizza vegetariana
  printf("¿Quiere una pizza vegetariana? (s/n): ");
  scanf(" %c",
        &vegetariana); // Leemos la respuesta del usuario (s para sí, n para no)

  // Verificamos si la pizza es vegetariana
  if (vegetariana == 's' || vegetariana == 'S') {
    // Si la respuesta es sí, mostramos los ingredientes vegetarianos
    // disponibles
    printf("Ingredientes vegetarianos:\n");
    printf("1. Pimiento\n");
    printf("2. Tofu\n");
    printf("Ingrese el número del ingrediente que desea: ");
    scanf("%d", &ingrediente); // Leemos la opción de ingrediente elegido

    // Dependiendo del ingrediente elegido, mostramos la pizza seleccionada
    if (ingrediente == 1) {
      printf("Ha elegido una pizza vegetariana con pimiento, mozzarella y "
             "tomate.\n");
    } else if (ingrediente == 2) {
      printf(
          "Ha elegido una pizza vegetariana con tofu, mozzarella y tomate.\n");
    } else {
      printf("Opción inválida.\n"); // Mensaje de error si se elige un número no
                                    // válido
    }

    // Verificamos si la pizza no es vegetariana
  } else if (vegetariana == 'n' || vegetariana == 'N') {
    // Si la respuesta es no, mostramos los ingredientes no vegetarianos
    // disponibles
    printf("Ingredientes no vegetarianos:\n");
    printf("1. Peperoni\n");
    printf("2. Jamón\n");
    printf("3. Salmón\n");
    printf("Ingrese el número del ingrediente que desea: ");
    scanf("%d", &ingrediente); // Leemos la opción de ingrediente elegido

    // Dependiendo del ingrediente elegido, mostramos la pizza seleccionada
    if (ingrediente == 1) {
      printf("Ha elegido una pizza no vegetariana con peperoni, mozzarella y "
             "tomate.\n");
    } else if (ingrediente == 2) {
      printf("Ha elegido una pizza no vegetariana con jamón, mozzarella y "
             "tomate.\n");
    } else if (ingrediente == 3) {
      printf("Ha elegido una pizza no vegetariana con salmón, mozzarella y "
             "tomate.\n");
    } else {
      printf("Opción inválida.\n"); // Mensaje de error si se elige un número no
                                    // válido
    }

  } else {
    // Mensaje de error si la respuesta inicial no es válida (ni 's' ni 'n')
    printf("Opción inválida.\n");
  }

  return 0; // El programa termina correctamente
}