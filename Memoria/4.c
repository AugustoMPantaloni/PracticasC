#include <stdio.h>

int sumar(int *a, int *b){

    int resultado = *a + *b;

    return resultado;
}


int main(int argc, char *argv[]) {
    int a = 5;
    int b = 12;

    int resultado = sumar(&a, &b);

    printf("valor de a: %d\n", a);
    printf("Direccion de memoria de a: %p\n", &a);

    printf("Valor de b: %d\n", b);
    printf("Direccion de memoria de b: %p\n", &b);

    printf("Resultado de la suma:%d\n", resultado);
    printf("Direccion de memoria del resultado: %p\n", &resultado);

    return 0;
}