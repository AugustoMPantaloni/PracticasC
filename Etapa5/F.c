#include <stdio.h>

int main(void){

    char palabra[50];

    printf("Ingrese una palabra\n");
    fgets(palabra, 50, stdin);
    for(int i = 0; i < 50; i++){
        if(palabra[i] == '\n'){
            palabra[i] = '\0';
        }
        break;
    }

    int longitud;
    for(int i = 0; i < 50; i++){
        if(palabra[i] == '\0'){
            longitud = i;
        }
    }

    for(int i = 0; i < longitud; i++){
        if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u'){
            printf("%c\n", palabra[i]);
        }
    }

    return 0;
}