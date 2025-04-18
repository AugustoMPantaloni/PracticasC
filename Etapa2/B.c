#include <stdio.h>

int main (void){
    int numero;

    printf("Ingrese un numero entero\n");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("El numero es par");
    } else{
        printf("El numero es impar");
    }
    
    return 0;
}