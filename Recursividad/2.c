#include <stdio.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
       return n * factorial(n - 1);
    }
    
}


int main(int argc, char *argv[]) {
    int numero = 10;
    int resultado = factorial(numero);
    printf("%d", resultado);
    return 0;
}