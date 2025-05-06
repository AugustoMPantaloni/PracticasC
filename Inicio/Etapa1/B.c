#include <stdio.h>

int main (void){
    int entero = 10;
    float decimal = 10.5f;
    double pi = 3.14592653589793;
    char caracter = 'A';

    printf("%zu\n",sizeof(entero));
    printf("%zu\n", sizeof(decimal));
    printf("%zu\n", sizeof(pi));
    printf("%zu\n", sizeof(caracter));

    return 0;
}