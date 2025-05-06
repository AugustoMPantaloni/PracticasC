#include <stdio.h>

void funcion(int *var1, int *var2){
    *var1 = 2;
    *var2 = 1;
}


int main (void){
    int var1 = 1;
    int var2 = 2;

    funcion(&var1, &var2);

    printf("valor de var1: %d, valor de var2: %d", var1, var2);

    return 0;
}