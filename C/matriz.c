#include <stdlib.h>
#include <stdio.h>

void reservar(int ***m, int filas, int cols)
{
    int **aux;

    aux = (int **)malloc(filas * sizeof(int *));
    for (int i = 0, k = 0; i < filas; i++)
    {
        aux[i] = (int *)malloc(cols * sizeof(int));

        for (int j = 0; j < cols; j++, k++)
        {
            aux[i][j] = k;
        }
    }
    *m = aux;
}

void imprimir(int **m, int filas, int cols)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", m[i][j]);
        }
        puts("");
    }
}

int main()
{
    int **matriz;
    reservar(&matriz, 4, 8);
    imprimir(matriz, 4, 8);

    for (int i = 0; i < 4; i++)
    {
        free(matriz[i]);
        matriz[i] = 0;
    }
    free(matriz);
    matriz = 0;
}

/*
matriz
0 -> 3,4,5,6
1 -> 3,4,5,2
2 ->
3 ->*/