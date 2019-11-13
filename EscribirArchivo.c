// Programa para escribir en un archivo.
#include<stdio.h>
#include<stdlib.h>

// Función principal, inicio del programa.
int main(){

    // Apuntador a archivo
    FILE *archivo = NULL;

    // Crear/abrir archivo; w: Write :- Escribir en el archivo.
    archivo = fopen("test_file.dat", "a");

    /*
        Operaciones con archivos:

        r: Reading. Lectura, el archivo debe existir.
        W: writing. Sobreescritura, si el archivo no existe lo crea y lo abre, elimina
            el contenido previo.
        a: append. Escritura, si el archivo no existe lo crea y lo abre, agrega contenido
            nuevo al existente.

    */

    // Escribir información en el archivo.
    fputs("Universidad Autónoma de Chihuahua\n", archivo);
    fputs("Facultad de Ingeniería\n", archivo);
    fputs("Introducción a la Programación\n", archivo);
    // ...

    // Debe cerrarse el archivo, para desbloquearlo.
    fclose(archivo);

    // Aviso al usuari :)
    printf("Operación finalizada\n");

    return 0;

}