#include <stdio.h>
#include <stdlib.h>

int Maximo10(int n){
    if(n >= 1 && n <= 10){
        return n;
    } else{
        exit(1);
    }
}

int main(void){
    int longitud_array;

    printf("Introduzca un numero del 1 al 10\n");
    scanf("%d", &longitud_array);

    int valor = Maximo10(longitud_array);

    int array[valor];

    for(int i = 0; i < valor; i++){
        array[i] = i + 1;
        printf("%d\n", array[i]);
    }

    return 0;
}