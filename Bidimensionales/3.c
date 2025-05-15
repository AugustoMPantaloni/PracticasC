#include <stdio.h>



void diagonal(int arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i == j){
                printf("%d", arr[i][j]);
            } else{
                printf("0");
            }
        }
        printf("\n");
    }
}



int main(int argc, char *argv[]) {
    int arr[3][3] = {
        {4, 7, 1},
        {0, 5, 9},
        {6, 2, 8}
    };

    diagonal(arr);

    return 0;
}
