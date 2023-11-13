#include <iostream>

class CNotas {
	
private:
	float nota;

public:
	CNotas(float n=0): nota(n){};
	void asignarNota(float n){ this->nota = n; }
	float ObtenerNota() const { return this->nota; }
};



int parteEntera(double a){
	//return (int) a;
	//return int(a);
	return static_cast<int>(a);	 
}

// Definicion de tipos:
// Puntero a funcion
typedef int (*TPtr)(double);

// Puntero a metodo:
typedef void (CNotas::*pf)(float);


// Prototipos de funciones:
void testPtrFuncion();
void testPtrMetodo();

int main(){
	testPtrMetodo();
}

void testPtrMetodo(){
	pf ptr = &CNotas::asignarNota;
	CNotas alumno;
	
	(alumno.*ptr)(6.5);
	std::cout << "Nota: " << alumno.ObtenerNota() << std::endl;
	
	CNotas *pAlumno = new CNotas();
	(pAlumno->*ptr)(7.5);
	std::cout << "Nota: " << pAlumno->ObtenerNota() << std::endl;
	
	delete pAlumno;
}

void testPtrFuncion(){
	std::cout << parteEntera(3.567) << std::endl;
	
	// Definir un puntero a funcion:
	int (*ptr)(double);
	
	// Definicion del ptr utilizando el tipo:
	TPtr ptr2;
	
	// Para igualar:
	ptr = parteEntera;
	
	std::cout << ptr(3.567) << std::endl;
	
	ptr2 = parteEntera;
	std::cout << ptr2(3.567) << std::endl;
}
