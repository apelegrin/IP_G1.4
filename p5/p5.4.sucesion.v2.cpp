#include <iostream>
using namespace std;


int main () {
	int an, a0, a1, a2, nTerminos, n;
	do{
		cout << "introduce un N para calcular los términos ";
		cin >> nTerminos;
	}while(!(nTerminos>=0));
	a0=0;
	a1=0;
	a2=0;
	an=0;
	for(n=0;n <= nTerminos;n++){
		switch (n){
			case 0:	an=1; break;
			case 1: an=2; break;
			case 2:	an=3; break;
			default:
			   an = 3*a2 - 2*a0;
			   break;
		}
		cout << "a("<< n << ")=" << an << endl;
		a0=a1;
		a1=a2;
		a2=an;
	}
}



