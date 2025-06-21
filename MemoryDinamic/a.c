#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int *a = malloc(sizeof(int));
    if(a == NULL)
    {
        printf("Error malloc");
        return 1;
    }

    *a = 5;

    printf("%d", *a);

    free(a);

    return 0;
}