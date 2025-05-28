#include <stdio.h>

int main(int argc, char *argv[]) {
    int a = 5;

    int *ptrA = &a;
    *ptrA = 10;
    printf("Direccion de memoria de a: %p\n", ptrA);
    printf("Valor de a: %d\n", *ptrA);

    return 0;
}