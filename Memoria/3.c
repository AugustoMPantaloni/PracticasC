#include <stdio.h>

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main(int argc, char *argv[]) {
    
    int a = 5;
    int b = 10;

    swap(&a, &b);

    printf("Valor de a: %d\n", a);
    printf("Valor de b : %d\n", b);

    return 0;
}