#include <stdio.h>

int recursividad (int numero){
    if(numero == 0){
        return 0;
    } else{
        return numero + recursividad(numero - 1);
    }
}



int main(int argc, char *argv[]) {
    
    return 0;
}