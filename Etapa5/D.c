#include <stdio.h>
#include <string.h>

int main(void){

    char palabras[5][20];
    printf("Se le pedira que ingrese 5 palabras\n");

    for(int i = 0; i < 5; i++){
        printf("Ingrese una palabra:");
        fgets(palabras[i], 20, stdin);
        palabras[i][strcspn(palabras[i], "\n")] = '\0';
    }

    char invertidas;

    for (int p = 0; p <= 5; p++){
        int longitud = strlen(palabras[p]);
        for (int i = longitud -1; i >= 0; i--){
            invertidas = palabras[p][i];
        }
        printf("%c", invertidas);
    }


    return 0;
}