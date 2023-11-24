// Time.h: interface for the Time class.
//
//////////////////////////////////////////////////////////////////////

#ifndef TIME_H

#define TIME_H

#include <string>
#include <iostream>
using namespace std;

class Time;
const Time operator+(const Time &, const Time &);
ostream & operator<<(ostream &, const Time &);

class Time {

	friend void imprime(Time &);
	friend const Time operator+(const Time &, const Time &);
	friend ostream & operator<<(ostream &, const Time &);

private:
	int hh, mm, ss;

	void repartir(double);
	void ajustar();
	static int N;

public:
	Time();
	Time(long);
	Time(double);
	Time(int, int, int);

	static int getN(){ return Time::N; }
	
	int getHH() const { return hh; }
	int getMM() const { return mm; }
	int getSS() const { return ss; }

	void setHH(int HH){ this->hh = HH; }
	void setMM(int MM){ this->mm = MM; }
	void setSS(int SS){ this->ss = SS; }

	double toHoras() const;
	long toSegundos() const;

	//const Time operator+(const Time &);
	const Time operator-(const Time &);
	Time &operator=(const Time &);

	static long toSegundos(double);

	virtual string toString() const;
	virtual ~Time();

};

#endif 
