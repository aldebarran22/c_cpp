
#include <stdio.h>

#define N 10

void modificar(int *array, int n, int val){
    // Multiplica cada posicion del array por val:
    int i;

    for (i = 0 ; i < N ; i++){
        array[i] *= val;
    }
}

void imprimir(int array[], int n){ // void imprimir(int *array){
    int i;
    //int n = sizeof(array) / sizeof(int); OJO no recibe los 10 int. Recibe la dir. del inicio del array.
    printf("\nTenemos %d elementos en array\n", n);
    for (i = 0 ; i < N ; i++){
        printf("%d ", array[i]);
    }
    puts("");
}

int main(){
    int numeros[N];
    int numeros2[]={1,2,3,4,5};
    int numeros3[N] = {0};
    int i;
    int *p;

    numeros3[0] = 999;
    numeros3[2] = 5;
    for (i = 0 ; i < N ; i++){
        printf("%d ", numeros3[i]);
    }
    printf("\nTam int: %ld bytes", sizeof(int));
    printf("\nDir inicio numeros3: %p", numeros3);
    printf("\nDir 2do elem de numeros3: %p %p", numeros3+1, &numeros3[1]);
    printf("\nnumeros3: %d", *numeros3);

    for (i = 0 ; i < N ; i++){
        printf("\n%d %d %p", numeros3[i], *(numeros3+i), numeros3+i);
    }
    p = numeros3;
    puts("");
    for (i = 0 ; i < N ; i++){
        printf("%d ", p[i]);
    }
    puts("");

    // Calcular el numero de elementos de un array:
    printf("\nTam. del array: %ld bytes", sizeof(numeros3));
    int n = sizeof(numeros3) / sizeof(int);
    printf("\nTenemos %d elementos en numeros3", n);
    imprimir(numeros3, n);
    modificar(numeros3, n, 10);
    imprimir(numeros3, n);
    puts("");

    return 0;
}