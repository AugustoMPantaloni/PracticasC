#include <stdio.h>
#include <string.h>

int lineal (char arr[][10], int n, char objetivo[]){
    for( int i = 0;  i < n; i++){
        if(strcmp(arr[i], objetivo) == 0){
            printf("Palabra encontrada en el indice %d", i);
            return 1;
        }
    }
    printf("Palabra no encontrada dentro del array\n");
    return 0;
}

int main(void){

    char array[][10]= {"gato", "perro", "conejo", "pez"};
    int n = sizeof(array) / sizeof(array[0]);
    
    printf("Ingrese una palabra para buscar en el array\n");
    char objetivo[100];
    fgets(objetivo, 100 , stdin);
    for (int i = 0; i < 100 ; i++) {
        if (objetivo[i] == '\n') {
            objetivo[i] = '\0';
            break;
        }
    }
    int length = strlen(objetivo);
    
    lineal(array, n , objetivo);

    return 0;
}

