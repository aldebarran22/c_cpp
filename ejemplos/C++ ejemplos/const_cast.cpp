#include <iostream> 
using namespace std; 

int main() { 
const int x = 10; 
int *x_var; 
x_var = const_cast<int*> (&x); // Válido  
//x_var = &x; // Ilegal, el compilador da error 
*x_var = 14; 

cout << *x_var << ", " << x << endl; 
return 0; 
}

