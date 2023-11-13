#include <iostream>
#include <stdarg.h>

using namespace std;

int calcular(int primero,...);

int main(){

cout<<calcular(2,15,-1)<<endl;
cout<<calcular(6,6,6,-1)<<endl;
cout<<calcular(8,10,1946,47,-1)<<endl;
}

int calcular(int primero,...){
	int cuenta=0,suma=0,i=primero;
	
	va_list marcador;
	va_start(marcador, primero);
	
	while (i!=-1){ 
		suma+=i;
		cuenta++;
		i=va_arg(marcador,int);
	}
	va_end(marcador);	
	return suma;
}
