
#ifndef ESTRUCTURAS_H

#define ESTRUCTURAS_H

#define N_MAX 10

struct TFecha
{   
    int dd;
    int mm;
    int yy;
}; // fecha1 es una variable


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

#endif