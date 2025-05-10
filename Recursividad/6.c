#include <stdio.h>

    long long potencia (int n, int p){
    if(p == 0){
        return 1;
    }else{
        return n * potencia(n, p - 1) ;
    }
}

int main(int argc, char *argv[]) {

    long long resultado = potencia(16, 5);
    printf("%lld", resultado);
    return 0;
}