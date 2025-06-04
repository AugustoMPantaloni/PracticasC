#include <stdio.h>

int ocurrencia (int *arr, int size, int objetivo)
{
    int contador = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == objetivo){
            contador++;
        }
    }
    return contador;
}


int main(int argc, char *argv[]) {
    int numeros[] = {5, 3, 8, 5, 2, 3, 9, 1, 8, 7};
    int size = sizeof(numeros) / sizeof(numeros[0]);

    int resultado = ocurrencia(numeros, size, 5);

    printf("El numero objetivo aparece %d veces.", resultado);
    
    return 0;
}