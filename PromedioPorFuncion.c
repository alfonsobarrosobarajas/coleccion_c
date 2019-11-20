#include <stdio.h>


// Función pa'calcular el promedio de tres califas
float calcularPromedio(float a1, float a2, float a3)
{

    return (a1 + a2 + a3) / 3;
}


int main()
{

    float c1, c2, c3, p;

    printf("Calif 1: ");
    scanf("%f", &c1);

    c1 = (c1 >= 0) ? c1 : -c1;

    printf("Calif 2: ");
    scanf("%f", &c2);

    c2 = (c2 >= 0) ? c2 : -c2;

    printf("Calif 3: ");
    scanf("%f", &c3);

    c3 = (c3 >= 0) ? c3 : -c3;


    printf("Promedio= %f", calcularPromedio(c1, c2, c3));

}

