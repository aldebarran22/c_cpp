// Cilindro.h: interface for the Cilindro class.
//
//////////////////////////////////////////////////////////////////////

#ifndef CILINDRO_H
#define CILINDRO_H


#include "Figura3D.h"

class Cilindro : public Figura3D {

private:
	double h, r;

public:
	Cilindro();
	Cilindro(double, double);
	void visualizar();
	double volumen();
	virtual ~Cilindro();
};

#endif 
