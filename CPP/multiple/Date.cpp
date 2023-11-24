// Date.cpp: implementation of the Date class.
//
//////////////////////////////////////////////////////////////////////

#include "Date.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Date::Date(){
	this->d = this->m = this->a = 0;
}

Date::Date(int d, int m, int a) {
	this->d = d;
	this->m = m;
	this->a = a;
}


string Date::toString() const {
	char s[50];
	string fecha;

	sprintf(s, "%02d/%02d/%04d", d, m, a);
	fecha = s;
	return fecha;
}


Date::~Date(){}
