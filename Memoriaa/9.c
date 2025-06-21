#include <stdio.h>

void mudar (int *arr1, int *arr2, int size){
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }
}




int main(int argc, char *argv[]) {
    
    int arr1[5]= {1, 2, 3, 4, 5};
    int arr2[5];
    int size = sizeof(arr1) / sizeof arr1[0];
    mudar(arr1, arr2, size);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}