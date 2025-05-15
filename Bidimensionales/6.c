#include <stdio.h>

void matriz(int arr1[5][5], int arr2[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int doble = arr1[i][j] * 2;
            arr2[i][j] = doble;
        }
    }
}

void printMatriz(int arr[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    int arr1[5][5] ={
    {4, 7, 1, 5, 6},
    {0, 5, 9, 7, 1},
    {6, 2, 8, 2, 0},
    {1, 5, 2, 3, 8},
    {4, 0, 7, 2, 5}
    };

    int arr2[5][5];

    matriz(arr1, arr2);
    printMatriz(arr2);

    return 0;
}