#include <stdio.h>

int main(void){
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 10; i++)
        if(numeros[i] % 2 == 0){
            pares ++;
        }else {
            impares++;
        }

    printf("cantidad de pares: %d \n cantidad de impares: %d", pares, impares);

    return 0;
}