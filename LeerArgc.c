#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    int opc = 0;
    FILE *file = NULL;
    char *buffer;
    file = fopen(argv[1], "wa+");

    printf("Nombre: ");
    scanf("%s", &buffer);
    
    fputs(buffer, file);
    fclose(file);
}