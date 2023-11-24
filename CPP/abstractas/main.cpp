
#include "Figura.h"
#include "Figura2D.h"
#include "Figura3D.h"

#include "Triangulo.h"
#include "Cubo.h"
#include "Cuadrado.h"
#include "Cilindro.h"

#include <iostream>

using namespace std;

int main(){
	Figura *f[4];
	Figura2D *f_2d[2];
	Figura3D *f_3d[2];

	f[0] = new Triangulo(2.5, 6);
	f[1] = new Cubo(3.4);
	f[2] = new Cuadrado(2.5);
	f[3] = new Cilindro(2.0, 5);

	for (int i = 0 ; i < 4 ; i++){
		f[i]->visualizar();
		delete f[i];

	}

	f_2d[0] = new Triangulo(2.5, 6);
	f_2d[1] = new Cuadrado(8);

	for (int i = 0 ; i < 2 ; i++){
		cout << "Area: " << f_2d[i]->area() << endl;
		delete f_2d[i];

	}
	
	f_3d[0] = new Cilindro(2.5, 6);
	f_3d[1] = new Cubo(8);

	for (int i = 0 ; i < 2 ; i++){
		cout << "volumen: " << f_3d[i]->volumen() << endl;
		delete f_3d[i];

	}

}
