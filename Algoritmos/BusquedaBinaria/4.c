#include <stdio.h>


int binaria (int arr[], int izquierda, int derecha, int objetivo){

    if(izquierda > derecha){
        return -1;
    }

    int medio = (derecha + izquierda) / 2;

    if(arr[medio] == objetivo){
        return medio;
    }

    if(arr[medio] < objetivo){
        izquierda = medio + 1;
        return binaria(arr, izquierda, derecha, objetivo);
    } else{
        derecha = medio - 1;
        return binaria(arr, izquierda, derecha, objetivo);
    }

    return -1;
}


int main(void){
    int numeros[] = {4, 9, 15, 23, 31, 42, 56, 68, 77, 89};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int objetivo;

    printf("Ingrese un numero para buscar en el array\n");
    scanf("%d", &objetivo);

    int recursion = binaria(numeros, 0, n - 1, objetivo );
    if(recursion == -1){
        printf("El numero no existe en el array");
    }else{
        printf("El numero se encuentra en el indice: %d", recursion);
    }

    return 0;
}