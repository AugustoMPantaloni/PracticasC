#include <stdio.h>

int burbuja(int arr[], int n){
    int contador = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j +1]){
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j +1] = temp;
                contador ++;
            }
        }
    }
    return contador;    
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main (void){
    int arr[] = {42, 17, 8, 99, 4, 56, 73, 21, 65, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int contador = burbuja(arr, n);
    printArray(arr, n);
    printf("el array ejecuto %d cambios.\n", contador);

    return 0;
}