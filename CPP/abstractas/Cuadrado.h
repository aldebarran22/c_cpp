// Cuadrado.h: interface for the Cuadrado class.
//
//////////////////////////////////////////////////////////////////////

#ifndef CUADRADO_H
#define CUADRADO_H


#include "Figura2D.h"

class Cuadrado : public Figura2D {

private:
	double lado;

public:
	Cuadrado();
	Cuadrado(double lado);
	void visualizar();
	double area();
	virtual ~Cuadrado();

};

#endif 
