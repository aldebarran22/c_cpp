// Cubo.cpp: implementation of the Cubo class.
//
//////////////////////////////////////////////////////////////////////

#include "Cubo.h"

#include <iostream>
using namespace std;


//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Cubo::Cubo(){
	this->lado = 0.0;
}


Cubo::Cubo(double lado){
	this->lado = lado;
}

void Cubo::visualizar(){
	cout << "Lado del Cubo: " << this->lado << endl;
}


double Cubo::volumen(){
	return (lado * lado * lado);
}

Cubo::~Cubo()
{

}
