
#include <fstream>
#include <iostream>

#include "matrizcsv.h"
#include "funciones.h"

MatrizCSV::MatrizCSV(std::string path){
    std::vector<std::string> columnas;
    std::string linea;

    // Abrir el fichero:
    std::ifstream fich(path.c_str());
    if (!fich){
        throw "No se encuentra el fichero";
    }

    while (std::getline(fich, linea)){
        split(linea, columnas);
        matriz.push_back(columnas);
        columnas.clear();
        //std::cout << linea << std::endl;
    }

    fich.close();
}
  
void MatrizCSV::print(){
    
}

MatrizCSV::~MatrizCSV(){

}