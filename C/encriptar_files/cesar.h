
#ifndef CESAR_H

#define CESAR_H

#define K 5
#define TAM_MEN 256
#define ALF 26

void cargarAlfabeto(char *);
void encriptar(const char *, const char *, int , char *, int );
void desencriptar(const char *, const char *, char *, int , int);

#endif