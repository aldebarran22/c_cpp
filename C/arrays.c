
#include <stdio.h>

#define N 10

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

    return 0;
}