#include <stdio.h>

    int lineal(int arr[], int n, int (*condicion)(int)){
        for(int i = 0; i < n; i++){
            if(condicion(arr[i])){
                printf("El array contiene numeros negativos\n");
                return 1;
            }
        }
        printf("El array no contiene numeros negativos\n");
        return 0;
    }   

    int esNegativo(int num){
        if(num < 0){
            return 1;
        }
        return 0;
    }

int main (void){
    int arr[] = {10, 4, -3, 8, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    lineal(arr, n, esNegativo);

    return 0;
}