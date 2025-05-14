#include <stdio.h>

void subArray(int arr[], int n){
    for(int start = 0; start < n; start++){
        for( int end = start; end < n; end++){
            for(int print = start; print <= end; print++){
                printf("%d", arr[print]);
            }
            printf("\n");
        }
    }
}

int main(int argc, char *argv[]) {
    int arr[] = {3, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    subArray(arr, n);

    return 0;
}