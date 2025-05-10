#include <stdio.h>

void inverso (int arr[], int n){
    if(n <= 0){
        return;
    } else{
        printf("%d ", arr[n - 1]);
        return inverso(arr, n - 1);
    }
}



int main(int argc, char *argv[]) {
    int numeros[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    inverso(numeros, n);

    return 0;
}