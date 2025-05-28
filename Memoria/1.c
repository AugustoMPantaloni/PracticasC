#include <stdio.h>

int main(int argc, char *argv[]) {
    int a = 5;
    int b = 10;

    printf("valor de a: %d\n", a);
    printf("Direccion de memoria de a: %p\n", &a);

    printf("Valor de b: %d\n", b);
    printf("Direccopm de memoria de b: %p\n", &b);

    return 0;
}