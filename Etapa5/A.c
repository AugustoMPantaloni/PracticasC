#include <stdio.h>

int main (void){
    int numeros[10];

    printf("Se le pedira que ingrese 10 numeros enteros\n");
    for (int i = 0; i < 10; i++){
        printf("ingrese un numero\n");
        scanf("%d", &numeros[i]);
    }

    int mayor = numeros[0]; //Inicia la variable desde el primer numero del array por si el usuario ingresa todos numeros negativos
    int posicion = 0; //

    for(int i = 1; i< 10; i++){ //El ciclo empieza desde indice = 1 porque indice = 0 ya se usa en la variable "mayor"
        if (numeros[i] > mayor){
            mayor = numeros[i];
            posicion = i;
        }
    }

    printf("El numero mas grande es %d y se encuntra en la posicion %d del array", mayor, posicion);

    return 0;
}