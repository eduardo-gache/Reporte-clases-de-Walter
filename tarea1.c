#include <stdio.h>

// 1. Función que calcula la suma de los cuadrados de los primeros n números
void sumaCuadrados(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    printf("La suma de los cuadrados de los primeros %d números es: %d\n", n, suma);
}

// 2. Función que multiplica cada elemento del arreglo por un escalar
void productoPorEscalar(int arr[], int n, int escalar) {
    for (int i = 0; i < n; i++) {
        arr[i] *= escalar;
    }

    printf("El arreglo después de multiplicar por el escalar es:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 3. Función que calcula la suma de los dígitos de un número
void sumaDigitos(int num) {
    int suma = 0;
    while (num != 0) {
        suma += num % 10; // Obtener el último dígito
        num /= 10;         // Eliminar el último dígito
    }
    printf("La suma de los dígitos es: %d\n", suma);
}

// 4. Función que calcula el promedio de los elementos de un arreglo
void promedio(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    float avg = (float)suma / n;
    printf("El promedio de los elementos del arreglo es: %.2f\n", avg);
}

void main() {
    int opcion;
    
    printf("Seleccione una opción:\n");
    printf("1. Suma de los cuadrados de los primeros n números\n");
    printf("2. Producto de los elementos de un arreglo por un escalar\n");
    printf("3. Suma de los dígitos de un número\n");
    printf("4. Promedio de los elementos de un arreglo\n");
    printf("Opción: ");
    scanf("%d", &opcion);
    
    switch (opcion) {
        case 1: {
            int n;
            printf("Ingrese un número entero n: ");
            scanf("%d", &n);
            sumaCuadrados(n);
            break;
        }
        case 2: {
            int n, escalar;
            printf("Ingrese el tamaño del arreglo: ");
            scanf("%d", &n);
            
            int arr[n];
            printf("Ingrese los elementos del arreglo:\n");
            for (int i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }
            
            printf("Ingrese el valor del escalar: ");
            scanf("%d", &escalar);
            
            productoPorEscalar(arr, n, escalar);
            break;
        }
        case 3: {
            int num;
            printf("Ingrese un número entero: ");
            scanf("%d", &num);
            sumaDigitos(num);
            break;
        }
        case 4: {
            int n;
            printf("Ingrese el tamaño del arreglo: ");
            scanf("%d", &n);
            
            int arr[n];
            printf("Ingrese los elementos del arreglo:\n");
            for (int i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }
            
            promedio(arr, n);
            break;
        }
        default:
            printf("Opción no válida.\n");
            break;
    }
}
