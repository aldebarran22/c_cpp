#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main(){
    int a = 0;
    char letra;
    int c = 10, d;

    d = ++c; // Prefijo, incrementa y asigna
    d = c++; // Postfijo, asigna, incrementa.

    if (++a){ // if (a != 0)
        puts("es true");
    } else {
        puts("es false");
    }

    int i;

    for (i=10 ; i ; i--){ // i > 0
        printf("%d ", i);
    }
    puts("");

    //while(1); // Bucle infinito
    //for(;;);

    for (letra = 'A'; letra <= 'Z'; letra++){
        printf("%c%c", letra, letra+32);
    }
    puts("");
}