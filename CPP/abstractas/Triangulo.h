// Triangulo.h: interface for the Triangulo class.
//
//////////////////////////////////////////////////////////////////////

#ifndef TRIANGULO_H
#define TRIANGULO_H


#include "Figura2D.h"

class Triangulo : public Figura2D {

private:
	double b, h;

public:
	Triangulo();
	Triangulo(double, double);
	virtual ~Triangulo();
	void visualizar();
	double area();

};

#endif 
