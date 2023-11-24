// Figura2D.h: interface for the Figura2D class.
//
//////////////////////////////////////////////////////////////////////

#ifndef FIGURA2D_H
#define FIGURA2D_H

#include "Figura.h"

class Figura2D: public Figura {

public:
	Figura2D();
	virtual ~Figura2D();	
	virtual double area()=0;

};

#endif 
