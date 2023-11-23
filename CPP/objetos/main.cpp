
#include <iostream>

#include "persona.h"
#include "hora.h"


int main(){
    // Crear e inicializar un objeto:
    Persona p("Alberto", 45, 1.8);
    Persona p2(p); // Aplicar el constructor copia
    Persona p3; // Constructor por defecto
    const Persona p4("Ana");
    Persona *ptr;

    ptr = new Persona("Eva", 45, 1.88);

    p3 = p; // Aplica el operator=
    // p3.operator=(p);

    p3.setNombre("Andrea");
    p.setNombre("Raul");

    // Se imprime el objeto en formato de texto:
    std::cout << p.to_string() << std::endl;
    std::cout << p2.to_string() << std::endl;
    std::cout << p3.to_string() << std::endl;
    std::cout << p4.to_string() << std::endl;
    std::cout << ptr->to_string() << std::endl;

    delete ptr; 
    ptr = nullptr;

    /////////////////
    Hora h1;
    Hora h2(8,33);

    h2.print();
    std::cout << std::endl;
    std::cout << "Hora: " << h1.to_string() << std::endl;
}