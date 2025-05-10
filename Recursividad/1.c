#include <stdio.h>

void contador (int numero){
    if(numero == 0){
        return;
    } else{
        printf("%d\n", numero);
        contador(numero - 1);
    }
}


int main(void) {
    



    return 0;
}


