/* Como funcionan las referencias y la comparativa con punteros */
#include <iostream>

void cambiarVar(int &ref){
    ref *= 100;
}
int main(){
    // Modificar a través de un puntero:
    int numero = 100;
    int numero2 = 200;
    int *ptr; // El puntero NO es obligatorio inicializarlo

    printf("\nnumero: %d", numero);
    ptr = &numero;
    *ptr += 10;
    printf("\nnumero: %d", numero);
    ptr = &numero2; // El puntero se puede cambiar a otra dirección de otra variable
    printf("\n *ptr: %d", *ptr);

    // Modificar a través de una referencia:
    int &ref = numero2; // La ref es obligatorio inicializarla
    printf("\n ref: %d numero2: %d", ref, numero2);
    ref *= 2;
    printf("\n ref: %d numero2: %d", ref, numero2);
    ref = numero; // La ref. NO puede cambiar de variable, simplemente numero2 toma el valor de numero
    printf("\n ref: %d numero2: %d, numero: %d", ref, numero2, numero);

    int num3 = 100;
    printf("\n Antes num3: %d", num3);
    cambiarVar(num3);
    printf("\n Despues num3: %d", num3);
    puts("");
    return 0;
}