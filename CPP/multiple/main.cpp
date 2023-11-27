

#include <iostream>

#include "DateTime.h"

int main(){

    Time *d1 = new DateTime(24,11,2023,17,41,31);
    std::cout << d1->toString() << std::endl;
    delete d1;
    DateTime dt(24,11,2023,17,41,31);
    std::cout << "DT: " << dt.toString() << std::endl;
    //std::cout << "Sg: " << dt.toSegundos() << std::endl;
    return 0;
}