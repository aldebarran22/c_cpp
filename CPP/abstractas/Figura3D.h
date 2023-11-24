// Figura3D.h: interface for the Figura3D class.
//
//////////////////////////////////////////////////////////////////////

#ifndef FIGURA3D_H
#define FIGURA3D_H


#include "Figura.h"

class Figura3D: public Figura {

public:
	Figura3D();
	virtual ~Figura3D();	
	virtual double volumen()=0;
};

#endif 
