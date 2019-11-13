// Inclusión de librerías
#include<stdio.h>

int main(){

    // Definir el tamaño de buffer, para leer cada cadena del archivo
    char linea[1024];
    
    // Apuntador al archivo
    FILE *archivo = NULL;

    // Variable que apunta al archivo con operación de lectura
    archivo = fopen("texto.txt", "r");

    // Se verifica que el archivo exista para poder leerlo
    if(archivo == NULL){
        printf("Imposible abrir el archivo");
        return -1;
    } else {

        // Recorre el archivo línea por línea para imprimirlo en pantalla
        while(fgets(linea, 1024, (FILE*)archivo)){
            // Imprime cada línea del archivo en pantalla
            printf("%s", linea);

        }

    }

    // Cierra el archivo, una vez terminado de leer
    fclose(archivo);

}