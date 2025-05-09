#include <stdio.h>
#include <string.h>

void burbuja (char *arr[], int n){
    int flag;
    for(int i = 0; i < n - 1; i++){
        flag = 0;
        for(int j = 0; j < n - 1 - i; j++){
            if(strcmp(arr[j], arr[j + 1]) > 0){
                char *temp = arr[j];
                arr[j] = arr[j +1];
                arr[j +1] = temp;
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        } 
    }
}

void printArray(char *arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%n\n", arr[i]);
    }
    printf("\n");
}



int main(void){

    char *nombres[] = {
        "Zelda",
        "Mario",
        "Link",
        "Bowser",
        "Peach",
        "Luigi",
        "Yoshi",
        "Toad",
        "Donkey",
        "Wario"
    };

    int n = sizeof(nombres) / sizeof(nombres[0]);

    burbuja(nombres, n);
    printArray(nombres, n);

    return 0;
}