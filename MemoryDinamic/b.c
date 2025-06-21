#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    int *arr =  malloc(5 * sizeof(int));
    if(arr == NULL){
        printf("Error malloc");
        return 1;
    }
    
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}