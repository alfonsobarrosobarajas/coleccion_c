#include<stdio.h>
#include<stdlib.h>

int main(){

    float *altura;
    float *base;

    altura = malloc(sizeof(float));
    base = malloc(sizeof(float));

    printf("Altura: ");
    scanf("%f", altura);
    printf("Base. ");
    scanf("%f", base);
    
    printf("Area= %f", (*altura * *base / 2));

}