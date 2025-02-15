// Escribir un programas que dado el año de nacimiento y el año 
//actual, calcula la edad de una persona 
// Escibe una funcion imprima la edad 
// Escribe otra funcion que la retorne 
// use ambas en el programa principal 
#include <stdio.h>
// Prototipo 
void imprimiredad1();
int imprimiredad2();

void main(){
    imprimiredad1();
    int edad = imprimiredad2 ();  //asignacion de Funciones
    printf("Tienes %d años de edad\n", edad);

    printf("Tienes %d años de edad\n",imprimiredad2());
}

// funciones 
// Escibe una funcion imprima la edad 
void imprimiredad1(){  // tipo procedimiento/ procedures 
    int a_actual=2025; 
    int a_nacimiento= 1971;
    int edad = a_actual - a_nacimiento;
    printf("Tienes %d años de edad\n", edad);
}

// Escribe otra funcion que la retorne
int imprimiredad2 (){
    int a_actual=2025; 
    int a_nacimiento= 1950;
    int edad= a_actual - a_nacimiento;
    return edad; 

}