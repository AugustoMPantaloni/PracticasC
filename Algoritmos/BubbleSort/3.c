#include <stdio.h>

void burbuja (int arr[], int n){
    int flag;
    for(int i = 0; i < n -1; i++){
        flag = 0;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
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


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void){
    int arr[] = {42, 17, 8, 99, 4, 56, 73, 21, 65, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    burbuja(arr, n);
    printArray(arr, n);
    return 0;
}