
#ifndef MATRIZ_CSV_H

#define MATRIZ_CSV_H

#include <vector>
#include <string>

class MatrizCSV {

    std::vector<std::vector<std::string>> matriz;

    public:
    MatrizCSV(std::string);
    int getNumFilas(){ return matriz.size();}
    int getNumCols(){ return matriz.at(0).size(); }
    void print();
    ~MatrizCSV();
};

#endif