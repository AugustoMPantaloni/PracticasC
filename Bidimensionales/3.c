#include <stdio.h>

    #define ROW 3
    #define COLUMNS 3


    void initArr(int arr[ROW][COLUMNS])
    {
        for (int i = 0; i < ROW; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                arr[i][j] = i * COLUMNS + (j + 1);
            }
        }
    }

    void transponerArr(int arr[ROW][COLUMNS])
    {

    }
    
    void printArr(int arr[ROW][COLUMNS])
    {
        for (int i = 0; i < ROW; i++)
        {
            for (int j = 0; j < COLUMNS; i++)
            {
                printf("%d", arr[i][j]);
            }
        }
    }

int main(int argc, char *argv[]) 
{

    int arr[ROW][COLUMNS];

    initArr(arr);
    transponerArr(arr);
    printArr(arr);
    
    return 0;
}

