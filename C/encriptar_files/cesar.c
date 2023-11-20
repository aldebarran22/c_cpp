/** Implementacion del algoritmo de Cesar*/

#include <stdio.h>
#include <string.h>

#include "cesar.h"



void imprimir(int array[], int n){ // void imprimir(int *array){
    int i;
    for (i = 0 ; i < n ; i++){
        printf("%2d ", array[i]);
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
    int i;
    char *ptr;
    int pos;

    for (i = 0 ; i < n ; i++){
        ptr = strchr(alfabeto, mensaje[i]);
        if (ptr != NULL){
            pos = ptr - alfabeto;
            numeros[i] = pos;
        }
    }
}

void sumarK(int *numeros, int n, int k, int lenAlfabeto){
    int i;

    for (i = 0 ; i < n ; i++){
        numeros[i] = (numeros[i] + k) % lenAlfabeto;
    }
}

void restarK(int *numeros, int n, int k, int lenAlfabeto){
	int i;
	
	for (i=0; i<n; i++){
		numeros[i] = (numeros[i] - k);
		if (numeros[i]<0){
			numeros[i] += lenAlfabeto;
		}
	}
}

void decodificar(const int *numeros, const char *alfabeto, char *mensaje_enc, int n){
    int i;
    char c;

    for (i = 0 ; i < n ; i++){
        c = alfabeto[numeros[i]];
        mensaje_enc[i] = c;
    }
    mensaje_enc[i] = '\0';
}

void encriptar(const char *mensaje, const char *alfabeto, int n, char *mensaje_enc, int k){
    int numeros[TAM_MEN];

    codificar(mensaje, alfabeto, numeros, n);
    //puts(mensaje);
    //imprimir(numeros, n);

    // Sumar k a cada número:
    sumarK(numeros, n, k, strlen(alfabeto));
    imprimir(numeros, n);

    decodificar(numeros, alfabeto, mensaje_enc, n);
    //puts(mensaje_enc);
}

void desencriptar(const char *mensaje_enc, const char *alfabeto, char *mensaje2, int n, int k){
    int numeros[TAM_MEN];

    codificar(mensaje_enc, alfabeto, numeros, n);

    // restar k al array de numeros: si el número < 0 sumar la longitud del alf.
    restarK(numeros, n, k, strlen(alfabeto));
    imprimir(numeros, n);

    // decodificar mensaje_enc
    decodificar(numeros, alfabeto, mensaje2, n);
}
