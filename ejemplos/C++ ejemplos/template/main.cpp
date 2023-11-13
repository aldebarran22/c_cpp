#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

#include "Numero.h"

int main(int argc, char** argv) {
	Numero<int> n1(8);
	Numero<double> n2(100.34);
	Numero<char> n3('a');
	
	cout << n1.getN() << " " << n2.getN() << " " << n3.getN() << endl;
	return 0;
}
