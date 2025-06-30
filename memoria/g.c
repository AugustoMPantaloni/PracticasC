#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nombre[50];
    int edad;
    int promedio;

} estudiante;

int main(int argc, char *argv[]) {
    int cantidad;
    printf("¿cuantos estudiante va a registrar?\n");
    scanf("%d", &cantidad);
    while(getchar() != '\n');

    estudiante *n = malloc(cantidad * sizeof(estudiante));
    if(n == NULL){
        printf("Error en memoria");
        return 1;
    }

    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingrese el nombre del estudiante: \n");
        fgets((n + i) -> nombre, 50, stdin);
        
        printf("ingrese la edad: \n");
        scanf("%d", &(n + i) -> edad);
        while(getchar() != '\n');

        printf("Ingrese el promedio: \n");
        scanf("%d", &(n + i) -> promedio);
        while(getchar() != '\n');
    }

    for (int i = 0; i < cantidad ; i++)
    {
        printf("Nombre: %s\n", (n + i) ->nombre);
        printf("Edad: %d\n", (n + i) -> edad);
        printf("Promedio: %d\n", (n + i) -> promedio);
    }

    int masAlto = (n) -> promedio;
    int indice = 0;
    for (int i = 0; i < cantidad; i++)
    {
        if((n + i) -> promedio > masAlto){
            masAlto = (n + i) ->promedio;
            indice = i;
            }
    }

    printf("El promedio mas alto es de %d y pertenece al alumno: %s",
        (n + indice)->promedio, (n + indice) -> nombre);

    free(n);

    return 0;
}