#include <stdio.h>

int pot(int n, int p){
    if(p == 0){
        return 1;
    }else{
        return n * pot(n, p - 1);
    }
}

int main(int argc, char *argv[]) {
    int numero = 2;
    int potencia = 5;

    int resultado = pot(numero, potencia);
    printf("%d", resultado);

    return 0;
}