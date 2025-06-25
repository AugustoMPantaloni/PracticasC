#include <stdio.h>

void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(int argc, char *argv[]) {
    int numero1 = 20;
    int numero2 = 5;

    swap(&numero1, &numero2);

    printf("%d\n", numero1);
    printf("%d\n", numero2);

    return 0;
}