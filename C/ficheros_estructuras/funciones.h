
#ifndef FUNCIONES_H

#define FUNCIONES_H

#include "estructuras.h"

void imprimirFecha(struct TFecha f);
void imprimirHora(THora hora);

struct TFecha fechaRand();
void usuarioRand(char *user);
THora horaRand();

#endif