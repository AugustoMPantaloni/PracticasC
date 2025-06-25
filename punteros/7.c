#include <stdio.h>

int main(int argc, char *argv[]) {
    int arr[] = {1, 2, 3, 4, 5};
    int tamaño = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < tamaño; i++)
    {
        printf("%d\n", *(arr + i));
    }

    return 0;
}