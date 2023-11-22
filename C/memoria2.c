
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

void funcion1(int n){
    n++;
    printf("\n en funcion1 n = %d", n);
}

void funcion2(int *n){
    printf("\n en en funcion dir: %p", n);
    *n = 100;
}

void funcion3(int *ptr){
    ptr = (int *) malloc(3 * sizeof(int));
    printf("\nptr: %d %d %d", ptr[0], ptr[1], ptr[2]);
    funcion2(ptr);
    printf("\nptr: %d %d %d", ptr[0], ptr[1], ptr[2]);
    printf("\n en funcion3 ptr: %p", ptr);
}

int main(){
    int *p = NULL;
    int array[] = {1,2,3,4,5};
    int n=0;

    printf("\n n = %d", n);
    funcion1(n);
    printf("\n n = %d", n);

    funcion2(&n);
    printf("\n n = %d", n);
    printf("\nArray: %d %d %d", array[0], array[1], array[2]);
    printf("\n en main array: %p", array);
    funcion2(array);
    printf("\nArray: %d %d %d", array[0], array[1], array[2]);
    funcion3(p);
    printf("\n en main p: %p", p);
   
    //reservar(&p);
    /*
    p = reservar2();
    printf("\ndir en main: %p\n", p);
    imprimir(p);
    mul2(p);
    liberar(&p);  
    printf("\ndir en main despues de free: %p\n", p);
    */
    puts("");
    return 0;
}