#include <stdio.h>

int main(void){

    char palabra[50];

    printf("Ingrese una palabra y se la devolvere invertida\n");
    fgets(palabra, 50, stdin);
    
    for(int i = 0; i < 50; i++){
        if(palabra[i] == '\n'){
            palabra[i] = '\0';
            break;
        }
    }

    int longitud;
    for (int i = 0; i < 50; i++){
        if(palabra[i] == '\0'){
            longitud = i;
            break;
        }
    }

    char revez[longitud];
    int j = 0; //indice para la palabra invertida
    for(int i = longitud -1; i >= 0; i--){
        revez[j] = palabra[i];
        j++;
    }

    revez[j] = '\0';

    printf("%s", revez);



    return 0;
}