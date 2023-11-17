// Estructuras en C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct TFecha
{
    /* data */
    int dd;
    int mm;
    int yy;
} fecha1; // fecha1 es una variable


typedef struct {
    int h;
    int m;
    int s;
} THora; // El nombre de un tipo nuevo

void imprimirFecha(struct TFecha f){
    printf("%02d/%02d/%d", f.dd, f.mm, f.yy);
}

void imprimirHora(THora hora){
    printf("%02d:%02d:%02d", hora.h, hora.m, hora.s);
}

void leerHora(THora *hora){
    //(*hora).h
    char aux[5];
    
    printf("HH:");
    fgets(aux, 5, stdin);
    hora->h = atoi(aux);

    printf("MM:");
    fgets(aux, 5, stdin);
    hora->m = atoi(aux);

    printf("SS:");
    fgets(aux, 5, stdin);
    hora->s = atoi(aux);
}


struct TFecha fechaRand(){
    int dias[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    struct TFecha f;
    
    f.mm = 1 + rand() % 12;
    f.dd = 1 + rand() % dias[f.mm-1];
    f.yy = 2000 + rand() % 31; // Entre 2000 y 2030

    return f;
}

THora horaRand(){
    THora hora;

    hora.h = rand() % 24;
    hora.m = rand() % 60;
    hora.s = rand() % 60;

    return hora;
}

int main(){
    THora ahora = {16, 42, 56};
    struct TFecha hoy = {5, 1, 2023};
    int i;

    srand(time(NULL));

    imprimirFecha(hoy);
    puts("");

    for (i = 0 ; i < 20 ; i++){
        hoy = fechaRand();
        imprimirFecha(hoy);        
        puts("");
        ahora = horaRand();
        imprimirHora(ahora);
        puts("");
    }

    // Leer una hora:
    leerHora(&ahora);
    imprimirHora(ahora);

    return 0;
}
