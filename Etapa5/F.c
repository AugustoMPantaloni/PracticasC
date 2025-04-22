#include <stdio.h>
#include <string.h>

int main(void){
    char palabra[50];
    int contador = 0;

    printf("Ingrese una palabra\n");
    fgets(palabra, 50, stdin);
    palabra[strcspn(palabra, "\n")] = '\0';

    int longitud = strlen(palabra);

    for(int i = 0; i < longitud; i++){
        if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u'){
            contador ++;
        }
    }
    
    printf("La palabra tiene %d vocales", contador);
}