
#include <stdio.h>

int main(){
    int i;
    long largo = 10000L;
    int numero1 = 100;
    char c = 'A';
    float real = 7.88F;
    double real2 = 4.678;
    int d = 2, m = 5, y = 2023;
    int valor;
    // unsigned, short, long

    printf("Mensaje de prueba\n");
    printf("numero1: %d, ocupa %ld bytes, numero1 como letra: %c\n", numero1, sizeof(numero1), numero1);
    printf("letra: %c, %d\n", c, c);
    printf("real: %f, %g\n", real, real);
    printf("real2: %f\n", real2);
    printf("Mensaje %s\n", "hola que tal");
    fprintf(stdout, "Mensaje 2: %s\n\n", "adios");

    printf("%02d/%02d/%d\n", d,m,y);

    // Para imprimir el columnas:
    for (i = 0 ; i < 20 ; i++){
        printf("%03d\n", i);
    }
    printf("valor: %d\n", valor); // ojo valor no esta inicializada.
    printf("real2: %.2f\n", real2);
    printf("real2: %5.2f\n", real2); // 5 posiciones para el numero completo y dos para decimales
    printf("%-15s\t%7.2f\n","Portatil", 655.0);
    printf("%-15s\t%7.2f\n","HP", 1254.6);
    puts(""); // Salto de linea:
    return 0;
}