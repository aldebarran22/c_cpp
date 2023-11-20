

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "estructuras.h"
#include "funciones.h"

#define N_STRUCT 25

void grabarFichero(const char *path){
    FILE *f;
    int i;
    TUser user;

    if ((f=fopen(path, "ab"))!=NULL){
        for (i = 0 ; i < N_STRUCT ; i++){
            user.fecha = fechaRand();
            user.hora = horaRand();
            usuarioRand(user.usuario);

            fwrite(&user, sizeof(TUser), 1, f);
        }
        fclose(f);
    }
}

void leerFichero(const char *path){
    FILE *f;    
    TUser user;

    if ((f=fopen(path, "rb"))!=NULL){
        while (fread(&user, sizeof(TUser), 1, f)){
            imprimirFecha(user.fecha);
            printf("\t");
            imprimirHora(user.hora);
            printf("\t");
            puts(user.usuario);
        }
        fclose(f);
    }
}


int main(){
    srand(time(0));
    grabarFichero("./estructuras2.bin");
    leerFichero("./estructuras2.bin");
    return 0;
}