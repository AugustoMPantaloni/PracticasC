#include <stdio.h>

int contar(int n){
    if(n == 0){
        return 1 ;
    } else{
        printf("%d\n", n);
        contar(n - 1);
    }
}


int main(int argc, char *argv[]) {
    int n = 10;
    contar(n);

    return 0;
}