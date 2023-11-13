#include <iostream>
class C1;

class C2 {
	int att2;
	
	friend class C1;	
	
	public:
		C2(int a){
			this->att2 = a;
		}		
};

class C1 {
	int att1;
	
	public:
		C1(int a){
			this->att1 = a;
		}	
		
		void metodo(C2 c2){
			std::cout << "att de C2: " << c2.att2 << std::endl;
		}	
};

int main(){
	C2 c2(100);
	C1 c1(9);
	
	c1.metodo(c2);
}

