#include <stdio.h>


int main (void){
    
    char palabra[50];
    
    printf("Ingrese una palabra para ver si es palindromo\n");
    fgets(palabra, 50, stdin);
    for(int i = 0; i < 50; i++){
        if(palabra[i] == '\n'){
            palabra[i] = '\0';
        }
    }

    int longitud;
    for(int i = 0; i < 50; i++){
        if(palabra[i] == '\0'){
            longitud = i;
            break;
        }
    }

    char revez[50];

    int j = 0;
    for(int i = longitud -1 ; i >= 0; i--){
        revez[j] = palabra[i];
        j++;
    }

    revez[j] = '\0';
    
    int palindromo = 1;

    for(int i = 0; i < longitud; i ++){
        if(revez[i] != palabra[i]){
            palindromo = 0;
            break;
        }   
    }
    
    if(palindromo == 1){
        printf("Es un palindromo");
    } else {
        printf("No es un palindromo");
    }
    
    
    return 0;
}