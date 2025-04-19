#include <stdio.h>

int main(void){
    int numeros[10];

    printf("Ingrese 10 numeros enteros distintos:\n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }

    int mayor = numeros[0];
    int posicion = 0;

    for(int indice = 1; indice < 10; indice++){
        if(numeros[indice] > mayor){
            mayor = numeros[indice];
            posicion = indice;
        }
    }

    printf("El numero mas grande es: %d\n", mayor);
    printf("La posicion en el array es la: %d\n", posicion);

    return 0;
}