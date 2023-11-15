#include <stdio.h>

int main(){
    // fflush(stdin) -> vacia el buffer de teclado
    int numero1, numero2;

    puts("Dame dos numeros:");
    scanf("%d %d" , &numero1, &numero2); /// & extraer la dirección de memoria de la variable.
    printf("numero1: %d dir: %p\n", numero1, &numero1);
    printf("numero2: %d dir: %p\n", numero2, &numero2);
    printf("La dir. ocupa: %ld bytes\n", sizeof(&numero1));

    // Leer un numero que tiene que ser múltiplo de 5:
    do {
        puts("Multiplo de 5:");
        scanf("%d", &numero1);
        if (numero1 % 5 != 0){
            puts("No es multiplo de 5");
        }
    } while (numero1 % 5); // Esta en el bucle mientras tecleamos numero que NO son multiplos de 5.
}