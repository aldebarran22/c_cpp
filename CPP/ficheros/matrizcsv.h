
#ifndef MATRIZ_CSV_H

#define MATRIZ_CSV_H

#include <vector>
#include <string>
#include <iostream>

class MatrizCSV {

    std::vector<std::vector<std::string>> matriz;

    public:
    MatrizCSV(std::string);
    int getNumFilas(){ return matriz.size();}
    int getNumCols(){ return matriz.at(0).size(); }
    void exportar(std::string, std::ostream &);
    void print();
    ~MatrizCSV();
};

#endif