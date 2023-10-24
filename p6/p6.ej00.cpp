#include <iostream>
#include <list>
using namespace std;


int main () {
	list<char> miLista;
	list<char>::iterator EA;
	int n;
	miLista.push_back('A');
	miLista.push_back('B');
	miLista.push_back('C');
	
	n=1;
	EA = miLista.begin();
	cout << "Valor de EA" << EA << endl;
	while (EA != miLista.end()){
		cout << n << "º >" << *EA << endl;
		n++;
		EA++;
	}
}



