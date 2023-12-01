#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
    int n;
    int suma;
} TParam;

void *tarea(void *p){
    int *n = (int *) p;
    int i;

    for (i = 0 ; i < *n ; i++){
        printf("\nMensaje %d", i);
        sleep(rand() % 2);        
    }
    puts("\nmensajes ha terminado!");
}

void *tarea2(void *p){
    TParam *param = (TParam *) p;
    int i;
    int numero;

    for (i = 0 ; i < param->n ; i++){
        numero = rand() % 100;
        printf("\nNumero: %d", numero);
        param->suma += numero;
        sleep(rand() % 2);
    }
    puts("\naleatorios ha terminado!");
}

int main(){
    int n1 = 10;
    TParam param = {12, 0};
    pthread_t id1, id2;
    pthread_create(&id1, 0, tarea, &n1);    
    pthread_create(&id2, 0, tarea2, &param); 

    pthread_join(id1, 0);
    pthread_join(id2, 0);

    printf("\nSuma total: %d\n", param.suma);

    puts("main termina!");
}
