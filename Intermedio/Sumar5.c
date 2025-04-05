#include <stdio.h>

//Se puede mejorar con un bucle.
int main(void){
    int numeros[5];

    printf("Escriba 5 numero (solo enteros) para sumarlos\n");
    scanf("%d", &numeros[0]);
    scanf("%d", &numeros[1]);
    scanf("%d", &numeros[2]);
    scanf("%d", &numeros[3]);
    scanf("%d", &numeros[4]);

    int suma = numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4];

    printf("El resultado de la suma es: %d\n", suma);

    return 0;
}