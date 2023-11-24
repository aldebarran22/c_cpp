// Triangulo.cpp: implementation of the Triangulo class.
//
//////////////////////////////////////////////////////////////////////

#include "Triangulo.h"
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Triangulo::Triangulo(){
	b = h = 0.0;
}

Triangulo::Triangulo(double b, double h){
	this->b = b;
	this->h = h;
}


void Triangulo::visualizar(){
	cout << "Triangulo, Base: " << this->b << " Altura: " << this->h << endl;
}

double Triangulo::area(){
	return (b * h / 2);
}

Triangulo::~Triangulo(){}
