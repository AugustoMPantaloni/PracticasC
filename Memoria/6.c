#include <stdio.h>

void recorrer (int *arr, int size){
    printf("Elementos del array\n");
    for (int i = 0; i < size; i++)
    {   
        printf("%d\n", *arr);
        arr++;
    }
}


int main(int argc, char *argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    int tamaño = sizeof(arr) / sizeof(arr[0]);

    recorrer(arr, tamaño);
    return 0;
}