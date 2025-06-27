#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tamaño;

    printf("¿cuantos numeros quiere ingresar?\n");
    scanf("%d", &tamaño);

    int *n =  malloc(tamaño * sizeof(int));

    for (int i = 0; i < tamaño; i++)
    {
        printf("ingrese el numero %d:", i + 1);
        scanf("%d", &n[i]);
    }

    int tamañoDoble = tamaño * 2;
    int *nDoble = malloc(tamañoDoble * sizeof(int));

    for (int i = 0; i < tamaño; i++)
    {
        nDoble[i] = n[i];
    }

    free(n);
    free(nDoble);

    return 0;
}