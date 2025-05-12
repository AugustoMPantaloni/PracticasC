#include <stdio.h>

    void subArray(int arr[], int n){
        int flag = 0;

        for(int start = 0; start < n; start++){
            for(int end = start; end < n; end++){
                int suma = 0;
                for(int print = start; print <= end; print++){
                    suma += arr[print];
                }
                if(suma > 10){
                    if(!flag){
                        printf("SubConjuntos cuya suma es mayor a 10:\n");
                        flag = 1;
                    }
                    for(int print = start; print <= end; print++){
                        printf("%d ", arr[print]);
                    }
                    printf("\n");
                }
            }
        }
        if(!flag){
            printf("No hay subconjuntos cuya suma sea mayor a 10");
        }
    }




int main(int argc, char *argv[]) {

    int arr[] = {2, 4, 6, 8};
    int n = sizeof(arr)/sizeof(arr[0]);

    subArray(arr, n);
    return 0;
}