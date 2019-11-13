// Inclusion de librerias
#include<stdio.h>

int main(){

    // Declaracion de matriz o arreglo bidimensional
    //    R  C      R: Row(fila); C: Column(columna) 
    int x[3][3];
    int total = 0;

    // Cómo llenar una matriz con ciclos
    for(int fila = 0; fila < 3; fila++){
        for(int columna = 0; columna < 3; columna++){
            
            // Salida al usuario
            printf("X[%d][%d]: ", fila, columna);
            
            // Capturar los datos desde el teclado
            scanf("%d", &x[fila][columna]);

        }
    }

    // Ciclo pa'imprimir la matrix
    for(int fila = 0; fila < 3; fila++){
        
        printf("\n");
        for(int columna = 0; columna < 3; columna++){

            total += x[fila][columna];
            // Imprimir en pantalla
            printf("%d\t", x[fila][columna]);
            
        }

    }

    printf("Total= %d", total);

}