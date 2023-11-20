
// Prueba para reservar memoria en un array

#include <stdlib.h>
#include <stdio.h>

#define N 10

reservar(){
    // Reservar para N elementos enteros:
    p = (int *) malloc(N * sizeof(int));
}

imprimir(){
    int i;
    for (i = 0 ;i < N ; i++){
        p[i] = i * 100;

        printf("%d ", p[i]);
    }
}

liberar(){
    free(p);
    p = NULL;
}

int main(){
    int *p = NULL;
   
    reservar();
    imprimir();
    liberar();
  

    puts("");
    return 0;
}