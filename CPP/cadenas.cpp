
#include <iostream>
#include <string>   // Librería string de C++
#include <cstring> // Librería string de C

typedef enum protocolos {TCP, UDP, HTTP} TProtocolo;

int numero = 100;

int main(){
    std::string cad = "hola";
    int numero = 10;

    std::cout << "numero local: " << numero << 
    " numero global: "<< ::numero << std::endl;

    TProtocolo pto = HTTP;
    std::cout << pto << std::endl;

    
    for (int p  = TCP ; p < HTTP ; p++){
        std::cout << p << std::endl;
    }

    double real = 2.567;
    int entero;

    entero = static_cast<int>(real);
    std::cout << "real: " << real << " entero: " << entero << std::endl;

    // Ejemplo de quitar el const de un puntero cte a char:
    const char *ptr = cad.c_str();
    //ptr[0] = 'X';

    std::cout << "cad: " << cad << std::endl;
    char *ptr2 = const_cast<char *>(ptr);
    ptr2[0] = 'X';
    std::cout << "cad: " << cad << std::endl;

    for (int i = 0 ; i < 10 ; i++)
        std::cout << i << std::endl;
    //std::cout << i << std::endl;  OJO esta linea esta fuera del bucle.

    for (int i = 0 ; i < 10 ; i++)
        std::cout << i << std::endl;

}
