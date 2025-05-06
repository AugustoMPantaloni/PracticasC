#include <stdio.h>

int main (void){
    int entero = 5;
    int otroEntero = 8;

    int izquierda = entero << 2;
    int derecha = entero >> 2;

    int and = entero & otroEntero;
    int or = entero | otroEntero;
    int xor = entero ^ otroEntero ; 

    printf("Valor original: %d\n", entero);
    printf("Desplazado a la izquierda (<< 2): %d\n", izquierda);
    printf("Desplazado a la derecha (>> 2): %d\n", derecha);

    printf("Valor original: %d\n", otroEntero);
    printf("Aplicado AND: %d\n", and);
    printf("Aplicado OR: %d\n", or);
    printf("Aplicado XOR: %d\n", xor);

    return 0;
}