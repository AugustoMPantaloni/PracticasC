#include <stdio.h>

int sumar(int n){
    if(n == 0){
        return 0;
    }else{
        return n + sumar(n - 1);
    }
}

int main(int argc, char *argv[]) {
    int n = 10;
    int resultado = sumar(n);
    printf("%d", resultado);

    return 0;
}