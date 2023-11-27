#include <iostream>

#include "DateTime.h"

DateTime::DateTime(int d, int m, int a, int hh, int mm, int ss):Date(d,m,a), Time(hh,mm,ss){}

std::string DateTime::toString() const {
    //td::cout << "toSegundos:" << Time::toSegundos() << std::endl;
    return Date::toString() + " " + Time::toString();
}

DateTime::~DateTime(){}