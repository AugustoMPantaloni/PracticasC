#include <stdio.h>

int main(void){
    int num1;

    printf("Ingrese un numero para conocer su tabla de multiplicar\n");
    scanf("%d", &num1);
    
    for(int i = 0; i <=10; i++){
        int resultado = num1 * 1;
        printf("%d\n", resultado);
    }

    return 0;
}