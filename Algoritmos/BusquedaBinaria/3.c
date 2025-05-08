#include <stdio.h>


int main (void){
    int numeros[] = {1, 3, 3, 5, 7, 7, 7, 10, 12, 12, 15, 18, 20, 20, 21, 25, 30};
    int n= sizeof(numeros) / sizeof(numeros[0]);
    int objetivo;

    printf("Ingrese un numero para buscar en el array");
    scanf("%d", &objetivo);

    return 0;
}