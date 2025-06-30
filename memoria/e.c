#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char cadena[50];
    printf("Ingrese una palabra: \n");
    fgets(cadena,50 , stdin);
    for (int i = 0; i < 50 - 1; i++) {
        if (cadena[i] == '\n') {
            cadena[i] = '\0';
        break;
        }
    }
    int length = strlen(cadena);

    char *vocales =  malloc((length + 1) * sizeof(char));
    if(vocales ==  NULL){
        printf("Error en memoria");
        return 1;
    }

    int j = 0;
    for (int i = 0; i < length; i++)
    {
        if(cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' ||
            cadena[i] == 'o' || cadena[i] == 'u'){
            vocales[j] = cadena[i];
            j++;
        }
    }

    vocales[j] = '\0';

    printf("vocales encontradas: %s\n", vocales);

    free(vocales);

    return 0;
}