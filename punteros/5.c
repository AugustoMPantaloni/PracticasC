#include <stdio.h>

void invertirSigno(int *n, int *resultado){
    *resultado = *n - (*n * 2);
}

int main(int argc, char *argv[]) {
    int numero = 10;
    int resultado;

    invertirSigno(&numero, &resultado);
    printf("%d", resultado);
    return 0;
}