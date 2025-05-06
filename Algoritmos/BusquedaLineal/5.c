#include <stdio.h>

    int lineal(int arr[], int n, int (*condicion)(int)){
        for(int i = 0; i < n; i++){
            if(condicion(arr[i])){
                printf("El primer indice par es: %d\n", i);
                return 1;
            }
        }
        return 0;
    }

    int esPar(int num) {
        if( num % 2 == 0){
            return 1;
        } else{
            return 0;
        }
    }

int main(void){

    int arr[] = {5, 7, 9, 6, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    lineal(arr, n, esPar);

    return 0;
}