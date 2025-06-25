#include <stdio.h>

void cuadrado(int *n, int *resultado){
    *resultado = *n * *n;
}

int main(int argc, char *argv[]) {
    int numero = 5;
    int resultado;

    cuadrado(&numero, &resultado);
    printf("%d", resultado);

    return 0;
}

