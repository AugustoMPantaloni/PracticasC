#include <stdio.h>


int main(void){

    int numeros[10] = {15, 22, 53, 41, 5, 126, 57, 889, 19, 410};

    int pares = 0;
    int impares = 0;

    for(int i = 0; i < 10; i++){
        if(numeros[i] % 2 == 0){
            pares += 1;
        } else{
            impares += 1;
        }
    }

    printf("Cantidad de numeros pares: %d\n cantidad de numeros impares:%d", pares, impares);
    return 0;
}