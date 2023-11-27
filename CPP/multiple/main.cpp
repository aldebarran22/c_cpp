

#include <iostream>

#include "DateTime.h"
#include "Time.h"
#include "TimeException.h"

void testDateTime(){
    Time *d1 = new DateTime(24,11,2023,17,41,31);
    std::cout << d1->toString() << std::endl;
    delete d1;
    DateTime dt(24,11,2023,17,41,31);
    std::cout << "DT: " << dt.toString() << std::endl;
    //std::cout << "Sg: " << dt.toSegundos() << std::endl;
}

void testException(){
    try {
        Time t(-3600L);
        std::cout << t.toString() << std::endl;

    } catch (std::exception &e){
        std::cout << "ERROR: " << e.what() << std::endl;
    }
}

int main(){

    testException();
    return 0;
}