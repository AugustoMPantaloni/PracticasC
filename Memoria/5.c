#include <stdio.h>

void sumar (int *a, int *b, int *resultado){
    *resultado = *a + *b;
}


int main(int argc, char *argv[]) {

    int a = 1;
    int b = 3;
    int resultado;

    sumar(&a, &b, &resultado);

    printf("El resultado es: %d\n", resultado);

    return 0;
}