#include <stdio.h>

void mayorOmenor(int num1, int num2){
    if(num1 == num2){
        printf("Los numero son iguales\n");
    } else if(num1 > num2){
        printf("El primer numero es mayor al segundo\n");
    } else{
        printf("El segundo numero es mayor\n");
    }
}

int main (){
    int num1, num2;

    printf("Ingrese un numero\n");
    scanf("%d", &num1);

    printf("Ingrese otro numero\n");
    scanf("%d", &num2);

    mayorOmenor(num1, num2);
    
    return 0;
};

