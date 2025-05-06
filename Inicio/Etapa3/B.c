#include <stdio.h>

int main (void){
    int numero;

    printf("Ingrese un numero entero para conocer su tabla de multiplicar\n");
    scanf("%d", &numero);


    for( int i = 1; i <= 10; i++){
        int resultado = i * numero;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}