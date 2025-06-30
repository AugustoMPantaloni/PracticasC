#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char palabra[50];
    printf("ingrese una palabra:\n");
    fgets(palabra, 50, stdin);

    for (int i = 0; i < 50 - 1; i++) {
        if (palabra[i] == '\n') {
        palabra[i] = '\0';
        break;
        }
    }
    int length = strlen(palabra);

    char *clon =  malloc((length + 1) * sizeof(char));
    if(clon ==  NULL){
        printf("Error en la memoria");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        clon[i] = palabra[i];
    }
    clon[length] = '\0';
    
    printf("%s", clon);

    free(clon);

    return 0;
}