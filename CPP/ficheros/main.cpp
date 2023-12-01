#include <vector>
#include <string>
#include <iostream>
#include <fstream>

#include "funciones.h"
#include "matrizcsv.h"

/*
void testSplit(){
    std::vector<std::string> tokens;
    std::string cad = "10509;BLAUS;4;1;0.15;Alemania";

    split(cad, tokens);
    for (std::string s : tokens){
        std::cout << s << std::endl;
    }
}*/

int main(){
    MatrizCSV m("../../ficheros/Pedidos.txt");
    //m.print();
    std::cout << m.getNumFilas() << " x " << m.getNumCols() << std::endl;

    std::ofstream os("./Suiza.csv");
    m.exportar("Suiza", std::cout); // Redirigir a consola
    m.exportar("Suiza", os); // al fichero
    os.close();
    return 0;
}