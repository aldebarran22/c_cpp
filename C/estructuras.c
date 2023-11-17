// Estructuras en C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_MAX 10

struct TFecha
{   
    int dd;
    int mm;
    int yy;
} fecha1; // fecha1 es una variable


typedef struct {
    int h;
    int m;
    int s;
} THora; // El nombre de un tipo nuevo

typedef struct {
    char usuario[N_MAX];
    struct TFecha fecha;
    THora hora;
} TUser;

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

struct TFecha leerFecha(){
    struct  TFecha f;
   
    printf("Introduce: d m y: ");
    scanf("%d %d %d", &f.dd, &f.mm, &f.yy);
    return f;
}


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

void imprimirHoras(THora *horas, int n){
    int i;

    for (i = 0 ; i < n ; i++){
        imprimirHora(horas[i]);
        printf("\n direccion: %p \t segundos: %d\n", &horas[i], horas[i].s);

    }
}

int main(){
    THora ahora = {16, 42, 56};
    struct TFecha hoy = {5, 1, 2023};
    THora horas[] = { {1,2,33}, {6,7,8}, {12,4,56}, {8,45,11} };
    int nHoras = sizeof(horas) / sizeof(THora);
    int i;
    TUser user = {"", {12,4,2020}, {12,45,9}};

    usuarioRand(user.usuario);
    puts(user.usuario);

    srand(time(NULL));
    imprimirHoras(horas, nHoras);

    /*
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
    puts("");

    hoy = leerFecha();
    imprimirFecha(hoy);*/
    puts("");
    return 0;
}
