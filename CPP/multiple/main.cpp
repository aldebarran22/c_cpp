

#include <iostream>

#include "DateTime.h"

int main(){

    DateTime dt(24,11,2023,17,41,31);
    std::cout << "DT: " << dt.toString() << std::endl;
    return 0;
}