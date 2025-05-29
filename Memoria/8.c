#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int cantidad;
    printf("¿Cuantos numeros va a ingresar?\n");
    scanf("%d", &cantidad);

    int *arr = malloc(cantidad * sizeof(int));

    for (int i = 0; i < cantidad; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", arr++);
    }

    printf("Los numeros ingresados son:\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}