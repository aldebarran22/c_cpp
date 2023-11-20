
// Prueba para reservar memoria en un array

#include <stdlib.h>
#include <stdio.h>

#define N 10

//reservar();
//imprimir();
//liberar();

int main(){
    int *p = NULL;
    int i;

    // Reservar para N elementos enteros:
    p = (int *) malloc(N * sizeof(int));

    for (i = 0 ;i < N ; i++){
        p[i] = i * 100;

        printf("%d ", p[i]);
    }

    free(p);
    p = NULL;

    puts("");
    return 0;
}