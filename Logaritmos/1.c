#include <stdio.h>

int lineal(int arr[], int n, int objetivo){
    for(int i = 0; i < n; i++ ){
        if(arr[i] == objetivo){
            printf("El numero se encuentra en la posicion: %d", i);
            return 1;
        } 
    }
    printf("Numero no encontrado");
    return 0;
}


int main (void){

    int arr[] = {3, 7, 12, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int objetivo;

    printf("Ingrese un numero a buscar en el array\n");
    scanf("%d", &objetivo);

    lineal(arr, n, objetivo);
    return 0;
}