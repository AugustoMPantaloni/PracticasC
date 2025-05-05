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

    int n; 
    int objetivo;
    
    printf("Ingrese el tamano del array:\n");
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        printf("Ingrese un numero para el array\n");
        scanf("%d", &arr[i]);
    }
    printf("Sus numeros ingresados son:\n");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("Ingrese un numero a buscar en el array:\n");
    scanf("%d", &objetivo);

    lineal(arr, n, objetivo);
    return 0;
}