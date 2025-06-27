#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int cantidad;

    printf("cuantos numeros quiere sumar?\n");
    scanf("%d", &cantidad);

    int *n = malloc(cantidad * sizeof(int));
    if(n == NULL){
        printf("Error en la memoria");
        return 1;
    }

    for (int i = 0; i < cantidad; i++)
    {
        printf("ingrese el numero %d: ", i + 1);
        scanf("%d", &n[i]);
    }

    int resultado = 0;
    for (int i = 0; i < cantidad; i++)
    {
        resultado +=  n[i];
    }

    printf("resultado de la suma: %d", resultado);

    free(n);

    return 0;
}