#include <stdio.h>

void iniciarArr(int arr[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = i * 3 + (j + 1);
        }
    }
}

void printArr(int arr[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    int arr [3][3];

    iniciarArr(arr);
    printArr(arr);
    

    return 0;
}