

#include "DateTime.h"

DateTime::DateTime(int d, int m, int a, int hh, int mm, int ss):Date(d,m,a), Time(hh,mm,ss){}

std::string DateTime::toString() const {
    return Date::toString() + " " + Time::toString();
}

DateTime::~DateTime(){}