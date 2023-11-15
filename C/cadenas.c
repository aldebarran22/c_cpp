
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
    char s[10];

    puts("Dame texto");
    fgets(s, 10, stdin);
    puts(s);
    int n = strlen(s);
    if (s[n-1]=='\n')
        s[n-1]='\0';

    if (strcmp(s, "hola")==0){
        puts("iguales");
    } else {
        puts("distintas");
    }
    printf("\nNumero de chars de s: %ld", strlen(s));
}

int main(){
    //pruebaArrChars();
    cadenasIO();
    return 0;
}