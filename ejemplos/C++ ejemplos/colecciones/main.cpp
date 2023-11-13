#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	vector<int> v;
	
	for (int i = 0 ; i < 10 ; i++)
		v.push_back(i);
	
	for (int i = 0 ; i < v.size() ; i++)
		cout << v[i]  << " " << v.at(i) << endl;
		
	map<string, int> mapa;
	map<string, int>::iterator e;
	
	mapa["uno"] = 1;
	mapa["dos"] = 2;
	mapa["tres"] = 3;
	
	for (e=mapa.begin() ; e != mapa.end() ; e++)
		cout << e->first << " " << e->second << endl;
	
	mapa["uno"] = 1;
	cout << mapa.size() << endl;
		
	return 0;
}
