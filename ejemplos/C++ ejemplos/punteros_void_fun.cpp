#include <iostream>

using namespace std;

enum dato{caracter,real,entero,cadena};
void ver(void *,dato);

int main(){

char a='b';
int x=3;
double y=4.5;
char *cad="hola";

ver(&a,caracter);
ver(&x,entero);
ver(&y,real);
ver(cad,cadena);
}

void ver(void *p, dato d){
	switch(d){
	
	case caracter: printf("%c\n",*(char *)p);
	break;
	
	case entero: printf("%d\n",*(int *)p);
	break;
	
	case real: printf("%ld\n",*(double *)p);
	break;
	
	case cadena: printf("%s\n",(char *)p);
	}
}


