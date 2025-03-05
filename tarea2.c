#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ESTUDIANTES 6
#define NUM_MATERIAS 5
#define APROBACION 6.0

// Función que genera una calificación aleatoria entre 5.0 y 10.0
float generarCalificacion() {
    return 5.0 + (rand() % 51) / 10.0; // Genera valores en el rango [5.0, 10.0]
}

void calcularPromedioPorMateria(float calificaciones[NUM_ESTUDIANTES][NUM_MATERIAS]) {
    printf("Promedio por materia:\n");
    for (int j = 0; j < NUM_MATERIAS; j++) {
        float suma = 0;
        for (int i = 0; i < NUM_ESTUDIANTES; i++) {
            suma += calificaciones[i][j];
        }
        printf("Materia %d: %.2f\n", j + 1, suma / NUM_ESTUDIANTES);
    }
}

int main() {
    srand(time(NULL)); // Inicializar semilla aleatoria
    
    float calificaciones[NUM_ESTUDIANTES][NUM_MATERIAS];
    
    // Llenar la matriz con valores aleatorios
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        for (int j = 0; j < NUM_MATERIAS; j++) {
            calificaciones[i][j] = generarCalificacion();
        }
    }
    
    // Mostrar calificaciones generadas
    printf("Calificaciones generadas:\n");
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        printf("Estudiante %d: ", i + 1);
        for (int j = 0; j < NUM_MATERIAS; j++) {
            printf("%.1f ", calificaciones[i][j]);
        }
        printf("\n");
    }
    
    // Calcular y mostrar promedio por materia
    calcularPromedioPorMateria(calificaciones);
    
    return 0;
}