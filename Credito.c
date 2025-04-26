#include <stdio.h>

//AMERICAN-EXPRES = 15 DIGITOS | MASTERCARD = 16 DIGITOS | VISA = 13, 16 DIGITOS

int main (void){

    char string[20]; //Array de char para guardar los numeros ingresados por el usario

    printf("Ingrse el numero de su tarjeta de credito/debito\n");
    fgets(string, 20, stdin);

    for(int i = 0; i < 20; i++){ //Borramos el salto de linea
        if(string[i] == '\n'){
            string[i] = '\0';
        }
    }

    int longitud;
    for(int i = 0; i < 20; i++){ //Calculamos la longitud con el \0 incluido
        if(string[i] == '\0'){
            longitud = i;
            break;
        }
    }

    switch(longitud){ //Switch para ver que marca de tarjeta es segun la cantidad de digitos
        case 15: printf("Su tarjeta es American Expres\n"); break;
        case 16: printf("Su tarjeta es MasterCard\n"); break;
        case 13: printf("Su tarjeta es visa\n"); break;
        default: printf ("Tarjeta no reconocida\n");
    }

    int numeros[20]; //Array de numeros enteros

    for(int i = 0; i < longitud -1; i++){ //Ciclo para transformar el array de char a array de numeros
        numeros[i] = string[i] - '0';
    }

    //Si algo sale mal, el problema esta de aca en adelante//

    int invertido[20]; //Array de numeros para almacenar los numeros de la tarjeta invertidos para poder aplicar el algoritmo
    int j = 0;
    for(int i = longitud -1; i >= 0; i--){ //Invertimos los numeros
        invertido[j] = numeros[i];
        j++;
    }

    int indiceImpar[20]; // Array de numeros para almacenar los digitos de los indices impares para despues multiplicarlos x 2
    int h = 0;
    for(int i = 0; i < longitud -1; i++){ //Aislamos los digitos de los indices impares
        if( i % 2 != 0){
            indiceImpar[h] = invertido[i];
            h++;
        }
    }

    int longitudIP; //variable para alamacenar la longitud de el array indiceImpar
    for(int i = 0; i < 20; i++){ //Calclamos la longitud de indiceImpar
        if(indiceImpar[i] == '\0'){
            longitudIP = i;
        }
    }
    
    int resultadoIP[20]; //Array para alamacenar el resultado de multiplicar x 2 los digitos de los indices impares
    for(int i = 0; i < longitudIP -1; i++){ //multiplicamos x 2 los digitos de los indices impares
        resultadoIP[i] = indiceImpar[i] * 2;
    }

    return 0;
}