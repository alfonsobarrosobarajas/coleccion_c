#include<stdio.h>
#include<stdlib.h>
#define LONG 4

int main(){

    // Declaración de variable apuntador a flotante
    float *x;

    // Asigna memoria para una variable del tipo float
    x = malloc(LONG * sizeof(float));

    // Captura los valores y los almacena en el arreglo dependiendo de las direcciones asignadas
    for(int i = 0; i < LONG; i++){

        printf("x[%d]: ", i);
        scanf("%f", x + i);

    }

    // Recorre el arreglo imprimiendo los datos en la salida estandar
    for(int i = 0; i < LONG; i++){

        printf("X[%d]= %f\n", i, *(x + i));

    }

}