#include <stdio.h>


void lineal(int arr[], int n, int objetivo){
    int retorno = 0;
    for(int i = 0; i < n; i++ ){
        if(arr[i] == objetivo){
            printf("El numero se encuentra en la posicion: %d\n", i);
            retorno += 1;
        } 
    }
    if(retorno == 0){
        printf("Numero no encontrado\n");
    }
}


int main (void){
    int arr[] = {5, 3, 7, 3, 9, 2, 5, 8, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int objetivo;

    printf("Ingrese un numero para buscar dentro del array\n");
    scanf("%d", &objetivo);

    lineal(arr, n, objetivo);

    return 0;
}