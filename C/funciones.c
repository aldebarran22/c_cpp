#include <stdio.h>

void imprimir(int tope){
    int i;

    for (i = 0 ; i < tope ; i++){
        printf("%d ", i);
    }
    puts("");
}

void pasoPorCopia(int valor){
    valor++;
    printf("pasoPorCopia: %d\n", valor);
}

void pasoPorPtr(int *valor){
    printf("Dir en pasoPorPtr: %p\n", valor);
    *valor = 100; // Acceder al contenido de lña dir. de memoria.
}

int main(){
    int valor = 0;

    pasoPorCopia(valor);
    printf("numero: %d\n", valor);

    printf("Dir en main: %p\n", &valor);
    pasoPorPtr(&valor); // Enviar la direccion de memoria de la variable "valor"
    printf("numero: %d\n", valor);


    //imprimir(10);
}

