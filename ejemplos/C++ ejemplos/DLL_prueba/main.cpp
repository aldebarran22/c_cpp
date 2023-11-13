#include <iostream>
#include <windows.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	HINSTANCE hLib;
	void (CDECL *pFuncion)();
	
	hLib = LoadLibrary("../dll/mi_dll.dll");
	
	if (hLib!=0){
		cout << "Ha cargado la DLL" << endl;
		
		// Intentamos cargar el metodo:
		pFuncion = (void (__cdecl *)()) GetProcAddress(hLib, "funcion1");
		
		
		if (pFuncion == 0)
			cerr << "No ha cargado la funcion" << endl;
		else
			pFuncion();
			
		
		FreeLibrary(hLib);		
		
	} else {
		cerr << "No se ha podido cargar la DLL" << endl;
	}
	
	return 0;
}
