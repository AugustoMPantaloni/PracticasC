#include <stdio.h>

void burbuja(float arr[], int n){
    int flag;
    for(int i = 0; i < n - 1; i++){
        flag = 0;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j +1]){
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

void printArray(float arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%f ", arr[i]);
    }
    printf("\n");
}


int main(void){
    float numeros[] = {
        42.5,
        3.14,
        99.99,
        0.01,
        73.3,
        8.8,
        56.0,
        17.25,
        65.65,
        30.1
    };
    int n = sizeof(numeros) / sizeof(numeros[0]);

    burbuja(numeros, n);
    printArray(numeros, n);


    return 0;
}