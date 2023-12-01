
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
        // Limpiar el final de la linea:
        linea = linea.substr(0, linea.length()-1);
        split(linea, columnas);
        matriz.push_back(columnas);
        columnas.clear();
        //std::cout << linea << std::endl;
    }

    fich.close();
}

void MatrizCSV::exportar(std::string pais, std::ostream &os){
    int n = pais.length();

    for (std::vector<std::string> fila :this->matriz){       
        if (pais == fila.at(5)){
            for (std::string col : fila){
                os << col << "\t";
            }
            os << std::endl;
        }
    }
}
  
void MatrizCSV::print(){
    for (std::vector<std::string> fila :this->matriz){
        for (std::string col : fila){
            std::cout << col << "\t";
        }
        std::cout << std::endl;
    }    
}

MatrizCSV::~MatrizCSV(){
    
}