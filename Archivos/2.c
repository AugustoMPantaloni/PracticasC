#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *archivo = fopen("archivo.txt", "r");
    if(archivo == NULL){
        printf("Error al leer el archivo");
        return 1;
    }

    int contador = 0;
    int c;
    int flag = 0;

    while((c = fgetc(archivo)) != EOF){
        if(c == ' ' || c == '\t' || c == '\n' ){
            flag = 0;
        } else if(flag == 0){
            flag = 1;
            contador += 1;
        }
    }

    fclose(archivo);

    printf("Hay %d palabras en el archivo", contador);

    return 0;
}