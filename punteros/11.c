#include <stdio.h>

void function(int **pp){
    **pp = 99;
}

int main(int argc, char *argv[]) {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    function(pp);
    printf("%d", **pp);

    return 0;
}