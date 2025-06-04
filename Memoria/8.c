#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int cantidad;
    printf("¿Cuantos numeros quiere ingresar?\n");
    scanf("%d", &cantidad);

    int *numeros = malloc(cantidad * sizeof(int));
    if(numeros == NULL){
        printf("ERROR, no hay memoria suficiente");
        return 1;
    }

    printf("ingrese los numeros:\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("numero %d:", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Los numeros ingeresados son:\n");
    for (int i = 0; i < cantidad; i++)
    {
        printf("%d\n",numeros[i]);
    }

    free(numeros);


    return 0;
}