// Lectura y escritura de ficheros de texto (linea a linea) y estructuras

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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

int main(){
    srand(time(NULL));
    leerCSV("./Pedidos.txt");
    escribirCSV("./matriz.csv", 20, 15);

    return 0;
}