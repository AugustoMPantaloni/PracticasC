#include <stdio.h>

void reverse(int n[], int tamaño){
    if(tamaño == 0){
        return;
    }else{
        printf("%d\n", n[tamaño - 1]);
        reverse(n, tamaño - 1);
    }
}

int main(int argc, char *argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    int tamaño =  sizeof(arr) / sizeof(arr[0]);
    reverse(arr, tamaño);
    return 0;
}