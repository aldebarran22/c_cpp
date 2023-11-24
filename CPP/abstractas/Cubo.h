// Cubo.h: interface for the Cubo class.
//
//////////////////////////////////////////////////////////////////////

#ifndef CUBO_H
#define CUBO_H


#include "Figura3D.h"

class Cubo : public Figura3D {

private:
	double lado;

public:
	Cubo();
	Cubo(double);
	virtual ~Cubo();
	void visualizar();
	double volumen();

};

#endif // !defined(AFX_CUBO_H__041AF134_B818_4B07_A6CC_AC07EB72B631__INCLUDED_)
