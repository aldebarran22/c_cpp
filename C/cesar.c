/** Implementacion del algoritmo de Cesar*/

#include <stdio.h>
#include <string.h>

#define K 5
#define TAM_MEN 256
#define ALF 26

void imprimir(int array[], int n){ // void imprimir(int *array){
    int i;
    for (i = 0 ; i < n ; i++){
        printf("%d ", array[i]);
    }
    puts("");
}

void cargarAlfabeto(char *alfabeto){
    char c;
    int i=0;

    for (c = 'A' ; c <= 'Z' ; c++, i+=2){
        alfabeto[i] = c;
        alfabeto[i+1] = c+32;
    }

    for (c='0' ; c <= '9' ; c++, i++){
        alfabeto[i] = c;
    }
    alfabeto[i] = ' ';
    alfabeto[i+1] = '\0';
}

void codificar(const char *mensaje, const char *alfabeto, int *numeros, int n){

}

void decodificar(const int *numeros, const char *alfabeto, char *mensaje_enc, int n){
    
}

int main(){
    char mensaje[TAM_MEN] = {"mi tno es 567889922"}, mensaje_enc[TAM_MEN];
    int numeros[TAM_MEN];
    char alfabeto[ALF * 2 + 10 + 1 + 1]; // dos alfabetos + 10 digitos + 1 espacio + 1 \0

    int n = strlen(mensaje);
    
    cargarAlfabeto(alfabeto);
    puts(alfabeto);

    codificar(mensaje, alfabeto, numeros, n);
    imprimir(numeros, n);
}