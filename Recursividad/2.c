#include <stdio.h>

int factorial (int numero){
    if(numero == 1){
        return 1;
    }else{
        return numero * factorial(numero - 1);
    }
}

int main(int argc, char *argv[]) {
    
    return 0;
}