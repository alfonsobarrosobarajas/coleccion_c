// Programa con apuntadores a entero 
#include<stdio.h>

// Funcion principal: Inicio de la aplicacion
int main(){
    
    // Declaracion de variable entera
    int x;

    // Declaracion de variable apuntador
    int *x_ptr;

    // Asignar la variabla apuntador
    x_ptr = &x;

    // Salida a pantalla(Salida estandar)
    printf("X= ");

    // Entrada del teclado(Entrada estandar)
    scanf("%d", &x);

    // Salida a pantalla
    printf("X: %d, en %X\n", x, x_ptr);

    printf("%d", sizeof(x));

}