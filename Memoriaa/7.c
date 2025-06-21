#include <stdio.h>

void aumentar(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        *arr *= 2;
        printf("nuevo valor: %d\n", *arr++);
    }
}

int main(int argc, char *argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    aumentar(arr, size);
    return 0;
}