/** Implementacion del algoritmo de Cesar*/

#include <stdio.h>
#include <string.h>

#define K 5
#define TAM_MEN 256
#define ALF 26

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

int main(){
    char mensaje[TAM_MEN] = {""}, mensaje_enc[TAM_MEN], mensaje2[TAM_MEN];    
    char alfabeto[ALF * 2 + 10 + 1 + 1]; // dos alfabetos + 10 digitos + 1 espacio + 1 \0
    int n;
    
    cargarAlfabeto(alfabeto);
    puts(alfabeto);
    printf("num letras alf: %ld\n", strlen(alfabeto));

    puts("Teclear mensaje: ");
    fgets(mensaje, TAM_MEN, stdin);
    if (strlen(mensaje) < TAM_MEN){        
        mensaje[strlen(mensaje)-1]='\0';
        puts(mensaje);
    }
    n = strlen(mensaje);
   
    encriptar(mensaje, alfabeto, n, mensaje_enc, K);
    puts(mensaje_enc);

    desencriptar(mensaje_enc, alfabeto, mensaje2, n, K);
    puts(mensaje2);
}