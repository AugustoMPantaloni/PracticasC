#include <stdio.h>

void subArray(int arr[], int n){
    int contador = 0;
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            contador += 1;
        }
    }
    printf("El array tiene %d subconjuntos", contador);
}



int main(int argc, char *argv[]) {

    int arr[] = {3, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    subArray(arr, n);

    return 0;
}