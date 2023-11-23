
#include <iostream>

#include "persona.h"


int main(){
    // Crear e inicializar un objeto:
    Persona p("Alberto", 45, 1.8);
    Persona p2(p); // Aplicar el constructor copia
    Persona p3; // Constructor por defecto

    p3 = p; // Aplica el operator=

    p3.setNombre("Andrea");
    p.setNombre("Raul");

    // Se imprime el objeto en formato de texto:
    std::cout << p.to_string() << std::endl;
    std::cout << p2.to_string() << std::endl;
    std::cout << p3.to_string() << std::endl;
}