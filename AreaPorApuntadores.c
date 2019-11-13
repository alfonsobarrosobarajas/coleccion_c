// Librerias
#include<stdio.h>
#include<stdlib.h>

// Inicio del programa
int main(){

    float altura;
    // Declaracion de apuntadores a flotantes
    float *altura_ptr;
    float *base;

    altura_ptr = &altura;
    // Reservar memoria para los datos
    //altura = malloc(sizeof(float));
    base = malloc(sizeof(float));

    // Captura de datos
    printf("Altura: ");
    scanf("%f", altura_ptr);

    printf("Base: ");
    scanf("%f", base);

    // Resultado
    printf("Area= %f", altura * *base / 2);

}