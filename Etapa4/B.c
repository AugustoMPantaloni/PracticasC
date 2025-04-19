#include <stdio.h>

int factorial (int numero){
    if(numero == 0 || numero == 1){
        return 1;
    } else {
        return numero * factorial(numero -1);
    }
}

int main(void){
    int numero;
    printf("Ingrese un numero para saber su factorial");
    scanf("%d", &numero);

    int resultado = factorial(numero);

    printf("El el factorial de %d es %d", numero, resultado);

    return 0;
}