#include <stdio.h>

int main(int argc, char *argv[]) {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("%p\n", &x);
    printf("%p\n", p);
    printf("%p\n", pp);

    return 0;
}