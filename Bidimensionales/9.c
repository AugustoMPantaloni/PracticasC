#include <stdio.h>


void matriz(int arr[5][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(arr[i][j]>5){
                printf("Row: %d\nColumn: %d\n", i, j);
            }
        }
    }
}

void printMatrix(int arr[5][5], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {

    int arr[5][5] ={
    {4, 7, 1, 5, 6},
    {0, 5, 9, 7, 1},
    {6, 2, 8, 2, 0},
    {1, 5, 2, 3, 8},
    {4, 0, 7, 2, 5}
    };

    matriz(arr);


    return 0;
}