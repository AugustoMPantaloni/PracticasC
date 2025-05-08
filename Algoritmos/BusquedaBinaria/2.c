#include <stdio.h>
#include <string.h>


int binaria (char *arr[], int n, char objetivo[]){
    int izquierda = 0;
    int derecha = n - 1;

    while (izquierda <= derecha){
        int medio = izquierda + (derecha - izquierda) / 2;

        if(strcmp(arr[medio], objetivo) == 0) {
            return medio;
        }
        
        if(strcmp(arr[medio], objetivo) < 0){
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    return -1;
}


int main (void){
    char *palabras[] = {
        "avion",
        "barco",
        "casa",
        "gato",
        "leon",
        "manzana",
        "perro",
        "raton",
        "sol",
        "zorro"
    };
    
    int n = sizeof(palabras) / sizeof(palabras[0]);
    
    printf("Ingrese una palabra para buscarla en el array:\n");
    char objetivo[50];
    fgets(objetivo, 50 , stdin);
    for (int i = 0; i < 50 ; i++) {
        if (objetivo[i] == '\n') {
            objetivo[i] = '\0';
            break;
        }
    }
    
    int index = binaria(palabras, n , objetivo);

    if(index == -1){
        printf("La palabra no existe en el array");
    } else{
        printf("La palabra se encentra en el indice: %d", index);
    }

    return 0;
}