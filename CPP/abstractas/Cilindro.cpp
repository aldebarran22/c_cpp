// Cilindro.cpp: implementation of the Cilindro class.
//
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

#include "Cilindro.h"
#define PI 3.141516

using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Cilindro::Cilindro(){
	this->r = this-> h = 0.0;
}

Cilindro::Cilindro(double r, double h){
	this->r = r;
	this->h = h;
}

void Cilindro::visualizar(){
	cout << "El cilindro: h: " << h << " radio: " << r << endl;
}

double Cilindro::volumen(){
	return PI * r * r * h;
}

Cilindro::~Cilindro(){}
