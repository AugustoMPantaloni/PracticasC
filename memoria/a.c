#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tamaño;

    printf("¿Cuantos numeros quiere ingresar?\n");
    scanf("%d", &tamaño);
    
    int *n = malloc(tamaño * sizeof(int));
    if(n == NULL){
        printf("Error en memoria");
        return 1;
    }

    for (int i = 0; i < tamaño; i++)
    {
        printf("numero: %d\n", i + 1);
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < tamaño; i++)
    {
        printf("%d\n", n[i]);
    }

    free(n);

    return 0;
}