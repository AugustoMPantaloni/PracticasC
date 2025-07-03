#include <stdio.h>

int main(int argc, char *argv[]) {
    
    FILE *archivo = fopen("archivo.txt", "r");
    if(archivo ==  NULL){
        printf("Error al abrir el archivo.");
        return 1;
    }

    char buffer[100];
    int contador = 0;

    while(fgets(buffer, 100, archivo) != NULL){
        contador += 1;
    }

    fclose(archivo);

    printf("hay %d lineas en el archivo", contador);

    return 0;
}