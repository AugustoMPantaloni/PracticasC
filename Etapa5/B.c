#include <stdio.h>

int main(void){
    char palabra[20];

    printf("Ingrese una palabra:\n");
    fgets(palabra, 20, stdin);

    int longitud;
    for(longitud = 0;
        palabra[longitud] != '\n'  && palabra[longitud] != '\0';
        longitud++){}

    char revez[20];
    int indiceRevez = 0;

    for(int i = longitud - 1; i >= 0; i--){
        revez[indiceRevez] = palabra[i];
        indiceRevez++;
    }
    revez[indiceRevez] = '\0';

    printf("La palabra al revez es: %s", revez);
    return 0;
}