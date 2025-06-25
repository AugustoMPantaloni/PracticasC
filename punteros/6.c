#include <stdio.h>

void maximo(int *n1, int *n2, int *resultado){
    *resultado = *n1;
    if(*n2 > *resultado){
        *resultado = *n2;
    }
}

int main(int argc, char *argv[]) {
    int n1 = 5;
    int n2 = 10;
    int resultado;

    maximo(&n1, &n2, &resultado);

    printf("%d", resultado);

    return 0;
}