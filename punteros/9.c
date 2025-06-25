#include <stdio.h>

void sumarArr(int *arr, int tamaño, int *resultado){
    *resultado = 0;
    for (int i = 0; i < tamaño; i++)
    {
        *resultado = *resultado + *(arr + i);
    }
}

int main(int argc, char *argv[]) {
    int numeros[] = {1, 2, 3, 4 ,5};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);
    int resultado;

    sumarArr(numeros, tamaño, &resultado);
    printf("%d", resultado);
    return 0;
}