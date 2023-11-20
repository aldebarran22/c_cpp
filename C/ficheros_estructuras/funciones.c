
#include <stdio.h>
#include <stdlib.h>

#include "estructuras.h"
#include "funciones.h"

struct TFecha fechaRand(){
    int dias[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    struct TFecha f;
    
    f.mm = 1 + rand() % 12;
    f.dd = 1 + rand() % dias[f.mm-1];
    f.yy = 2000 + rand() % 31; // Entre 2000 y 2030

    return f;
}

void usuarioRand(char *user){
    // Generar el nombre del usuario a partir de 5 letras:
    int i;

    for (i = 0 ; i < 5 ; i++){
        user[i] = (char) (65 + rand() % 26);
    }
    user[i] = '\0';
}

THora horaRand(){

    THora hora;

    hora.h = rand() % 24;
    hora.m = rand() % 60;
    hora.s = rand() % 60;

    return hora;
}

void imprimirFecha(struct TFecha f){
    printf("%02d/%02d/%d", f.dd, f.mm, f.yy);
}

void imprimirHora(THora hora){
    printf("%02d:%02d:%02d", hora.h, hora.m, hora.s);
}