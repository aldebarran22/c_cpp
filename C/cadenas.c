
#include <stdio.h>
#include <string.h>

void imprimir(char *ptr){
    ptr[0] = 'X';
}

void pruebaArrChars(){
    char s[20] = {"hola que tal"}; // El compilador añade el \0
    char s2[10] = {'H','O','L','A','\0'};
    int i;
    char ptr[20];
    //char *ptr;

    strcpy(ptr, s);
  //  ptr = s;
    ptr[0] = 'X';
    puts(ptr);
    printf("%s\n", s);
    puts(s2);
    fputs(s2, stdout); // Redirigir a la salida estándar: consola!

    for (i = 0 ; i < strlen(s) ; i++){
        printf("\n %d, %c, %p", i, s[i], &s[i]);
    }
    puts("");
    s[4] = '\0';
    puts(s);
}

void cadenasIO(){
    char s[100];

    puts("Dame texto");
    fgets(s, 100, stdin);
    puts(s);
    int n = strlen(s);
    if (s[n-1]=='\n')
        s[n-1]='\0';

    //if (strnicmp(s, "hola", 4)==0){
    if (!strncasecmp(s, "hola", 4)){
        puts("iguales");
    } else {
        puts("distintas");
    }
    strcat(s, " mas caracteres");
    puts(s);
    printf("\nNumero de chars de s: %ld\n", strlen(s));
}

void busquedas(){
    char cad[100] = {"hola que tal"};
    char *ptr;

    ptr = strchr(cad, 'a');
    if (ptr != NULL){
        printf("\nLa letra esta en la dir: %p - %c\n", ptr, *ptr);
        printf("Direccion de inicio: %p\n", cad);
        printf("\nPosicion: %ld\n", ptr - cad);
        puts(ptr);

        // Buscar la otra 'a':
        ptr = strchr(ptr+1, 'a');
        if (ptr!=NULL){
            printf("\nPosicion segunda 'a': %ld\n", ptr - cad);
        }
    }
    puts("");
}

int main(){
    //pruebaArrChars();
    //cadenasIO();
    busquedas();
    return 0;
}