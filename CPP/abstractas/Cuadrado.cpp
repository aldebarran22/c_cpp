// Cuadrado.cpp: implementation of the Cuadrado class.
//
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#include "Cuadrado.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Cuadrado::Cuadrado(){
	this->lado = 0.0;
}


Cuadrado::Cuadrado(double lado){
	this->lado = lado;
}

void Cuadrado::visualizar(){
	cout << "Lado del Cuadrado: " << this->lado << endl;
}


double Cuadrado::area(){
	return this->lado * this->lado;
}

Cuadrado::~Cuadrado(){}
