#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *archivo = fopen("archivo.txt", "r");
    if(archivo == NULL){
        printf("Error al leer el archivo");
        return 1;
    }

    int c;
    int flag = 0;

    while((c = fgetc(archivo)) != EOF){
        if(
            c == ' ' || c == '\t' || c == '\n' ||
            (c >= ':' && c <= '@') ||
            (c >= '[' && c <= '`'))
        {
            flag = 0;
        } 
        else if (flag == 0)
        {
            flag = 1;
            if (c >= 65 && c <= 90)
            {
                c += 32;
            }
        }
    }

    fclose(archivo);


    return 0;
}