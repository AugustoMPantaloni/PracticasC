#include <stdio.h>


int diagonalP(int arr[5][5]){
    int principal = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i == j){
                principal += arr[i][j];
            }
        }
    }
    return principal;
}

int diagonalS(int arr[5][5]){
    int secundaria = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i + j == 4){
                secundaria += arr[i][j];
            }
        }
    }
    return secundaria;
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

    int diagP = diagonalP(arr);
    int diagS = diagonalS(arr);

    printf("Diagonal principal suma: %d\nDiagonal secundaria suma:%d", diagP, diagS);
    return 0;
}