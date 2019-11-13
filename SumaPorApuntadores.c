#include<stdio.h> // printf y scanf

int main(){

    int x;
    int *x_ptr;
    
    
    int y;
    
    int *y_ptr;
    int total;

    // Asignación de apuntadores
    x_ptr = &x; // x_ptr almacena la dirección donde se aloja x
    y_ptr = &y; // y_ptr almacena la dirección donde se aloja y

    printf("X: ");
    scanf("%d", &x);

    printf("Y: ");
    scanf("%d", &y);

    total = *x_ptr + *y_ptr;

    printf("R= %d", total);

}