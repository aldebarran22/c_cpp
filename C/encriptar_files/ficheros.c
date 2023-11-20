// Lectura y escritura de ficheros de texto (linea a linea) y estructuras

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "cesar.h"

void leerCSV(const char *path){
    char linea[1024];
    FILE *fich;

    if ((fich = fopen(path, "rt"))!=NULL){
        while (fgets(linea, 1024, fich)!=NULL){
            linea[strlen(linea)-1]='\0';
            puts(linea);
        }
        fclose(fich);
    }
}

void escribirCSV(const char *path, int filas, int cols){
    FILE *fich;
    int i, j;
    int numero;
    char linea[200];
    
    if ((fich = fopen(path, "wt"))!=NULL){

        for  (i = 0 ; i < filas ; i++){
            for (j = 0 ; j < cols ; j++){
                numero = rand() % 100;
                sprintf(linea, "%d", numero);
                if (j+1 != cols){
                    strcat(linea, ";");
                }
                fputs(linea, fich);
            }
            fputs("\n", fich);
        }
        fclose(fich);
    }
}

void encriptarFichero(const char *path, const char *pathDestino, int k){
    FILE *fin, *fout;
    char linea[1024], linea_enc[1024];
    char alfabeto[ALF * 2 + 10 + 1 + 1]; 
    int tam_linea;

    cargarAlfabeto(alfabeto);

    if ((fin = fopen(path, "rt"))!=NULL && (fout = fopen(pathDestino, "wt"))!=NULL){
         while (fgets(linea, 1024, fin)!=NULL){
            linea[strlen(linea)-1]='\0';
            tam_linea = strlen(linea);
            encriptar(linea, alfabeto, tam_linea, linea_enc, k);
            puts(linea);
            puts(linea_enc);

            fputs(linea_enc, fout);
            fputs("\n", fout);
        }

        fclose(fin);
        fclose(fout);
    }
}

int main(){
    srand(time(NULL));
    //leerCSV("./Pedidostam_linea,.txt");
    //escribirCSV("./matriz.csv", 20, 15);
    encriptarFichero("./datos.txt", "./datos_enc.txt",6);
    return 0;
}