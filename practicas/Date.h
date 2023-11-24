// Date.h: interface for the Date class.
//
//////////////////////////////////////////////////////////////////////

#ifndef DATE_H

#define DATE_H

#include <string>
using namespace std;

class Date  {

private:
	int dd, mm, aa;

public:
	Date();
	Date(int, int, int);
	string toString() const;
	virtual ~Date();

};

#endif 
