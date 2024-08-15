#include <stdio.h>

int main() {
  float puntuacion;

  printf("Ingrese la puntuación del empleado (0.0, 0.4, 0.6 o más): ");
  scanf("%f", &puntuacion); // Leemos la puntuación del empleado

  // Verificamos el nivel de rendimiento basado en la puntuación
  if (puntuacion < 0) {
    printf("La puntuación no puede ser negativa.\n"); // Error si la puntuación
                                                      // es negativa
  } else if (puntuacion < 0.4) {
    printf("Nivel de rendimiento: Insuficiente. Bono: $0\n"); // Rendimiento
                                                              // insuficiente,
                                                              // sin bono
  } else if (puntuacion < 0.6) {
    printf("Nivel de rendimiento: Aceptable. Bono: $500\n"); // Rendimiento
                                                             // aceptable, bono
                                                             // de $500
  } else {
    printf("Nivel de rendimiento: Excelente. Bono: $1000\n"); // Rendimiento
                                                              // excelente, bono
                                                              // de $1000
  }

  return 0; // El programa termina correctamente
}