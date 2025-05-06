#include <stdio.h>

int main (void){

    char string1[50];
    char string2[50];

    printf("Ingrese una palabra\n");
    fgets(string1, 50, stdin);
    for(int i = 0; i < 50; i++ ){
        if(string1[i] == '\n'){
            string1[i] = '\0';
        }
    }

    printf("Ingrese otra palabra\n");
    fgets(string2, 50, stdin);
    for(int i = 0; i < 50; i++ ){
        if(string2[i] == '\n'){
            string2[i] = '\0';
        }
    }

    int longitud1;
    int longitud2;

    for(int i = 0; i < 50; i++){
        if(string1[i] == '\0'){
            longitud1 = i;
            break;
        }
    }
    for(int i = 0; i < 50; i++){
        if(string2[i] == '\0'){
            longitud2 = i;
            break;
        }
    }

    char concat[100];

    for (int i = 0; i < longitud1; i++){
        concat[i] = string1[i];
    }

    for( int j = 0; j <= longitud2; j++){
        concat[longitud1 + j] = string2[j];
    }

    printf("%s", concat);



    return 0;
}