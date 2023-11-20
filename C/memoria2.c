
// Prueba para reservar memoria en un array

#include <stdlib.h>
#include <stdio.h>

#define N 10

void reservar(int **p){
    // Reservar para N elementos enteros:
    *p = (int *) malloc(N * sizeof(int));
    printf("\ndir en reservar: %p\n", *p);
}

int *reservar2(){
    int *p = (int *) malloc(N * sizeof(int));
    printf("\ndir en reservar2: %p\n",p);
    return p;
}

void imprimir(int *p){
    int i;
    for (i = 0 ;i < N ; i++){
        p[i] = i * 100;

        printf("%d ", p[i]);
    }
    puts("");
}

void mul2(int *p){
    int i;
    for (i = 0 ;i < N ; i++){
        p[i] *= 2;

        printf("%d ", p[i]);
    }
    puts("");
}

void liberar(int **p){
    free(*p);
    *p = NULL;
}

int main(){
    int *p = NULL;
   
    //reservar(&p);
    p = reservar2();
    printf("\ndir en main: %p\n", p);
    imprimir(p);
    mul2(p);
    liberar(&p);  
    printf("\ndir en main despues de free: %p\n", p);

    puts("");
    return 0;
}