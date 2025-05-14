#include <stdio.h>

void iniciarArr(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = i * 3 + (j + 1);
        }
    }
}

int sumarArr(int arr[3][3])
{
    int acumulador = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            acumulador += arr[i][j];
        }
    }
    return acumulador;
}



int main(int argc, char *argv[]) {
    int arr[3][3];
    iniciarArr(arr);
    int resultado = sumarArr(arr);

    printf("%d", resultado);

    return 0;
}