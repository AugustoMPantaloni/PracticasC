#include <stdio.h>

int main (){
    int num1;

    printf("ingrese un numero para verificar si es par o impar:");

    scanf("%d", &num1);

    if(num1 % 2 == 0){
        printf("El numero es par");
    }else {
        printf("El numero es impar");
    }
    return 0;
}