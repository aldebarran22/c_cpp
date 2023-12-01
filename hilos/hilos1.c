#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void *tarea(void *p){
    int *n = (int *) p;
    int i;

    for (i = 0 ; i < *n ; i++){
        printf("\nMensaje %d", i);
        sleep(rand() % 2);        
    }
    puts("mensajes ha terminado!");
}

void *tarea2(void *p){
    int *n = (int *) p;
    int i;

    for (i = 0 ; i < *n ; i++){
        printf("\nNumero: %d", rand() % 100);
        sleep(rand() % 2);
    }
    puts("aleatorios ha terminado!");
}

int main(){
    int n1 = 10, n2 = 12;
    pthread_t id1, id2;
    pthread_create(&id1, 0, tarea, &n1);
    pthread_create(&id2, 0, tarea2, &n2);

    pthread_join(id1, 0);
    pthread_join(id2, 0);

    puts("main termina!");
}
