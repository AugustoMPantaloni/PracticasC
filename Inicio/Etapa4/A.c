#include <stdio.h>

int potencia (int base, int exponente){
    if(exponente == 0) return 1;

    int resultado = base;
    for(int i = 1; i < exponente; i++){
        resultado *= base;
    }
    return resultado;
}


int main (void){
    int base, exponente;
    printf("Ingrese una base\n");
    scanf("%d", &base);

    printf("Ingrese un exponente\n");
    scanf("%d", &exponente);

    int resultado = potencia(base, exponente);

    printf("El resultado es %d", resultado);

    return 0;
}