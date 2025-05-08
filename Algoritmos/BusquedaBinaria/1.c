#include <stdio.h>

int binaria (int arr[], int n, int objetivo){
    int izquierda = 0; //Extremo izquierdo
    int derecha = n - 1; //Extremo derecho

    while(izquierda <= derecha){
        int medio =  izquierda + (derecha - izquierda) / 2;

        if(arr[medio] == objetivo){
            return medio;
        }

        if(arr[medio] < objetivo){
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1; 
}


int main(void){
    int numeros[] = {4, 9, 15, 23, 31, 42, 56, 68, 77, 89};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    int objetivo;

    printf("Ingrese un numero para buscar en el array\n");
    scanf("%d", &objetivo);

    int indice = binaria(numeros, n, objetivo);
    if(indice == -1){
        printf("El numero no existe en el array");
    }else{
        printf("El numero se encuentra en el indice: %d", indice);
    }

    return 0;
}