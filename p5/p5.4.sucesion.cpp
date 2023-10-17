#include <iostream>
using namespace std;


int main () {
	int an, a0, a1, a2, m, n;
	cout << "introduce un m para calcular an > m ";
	cin >> m;
	n=0;
	a0=1;
	a2=3;
	an=0;
	while (an <= m){ //n más pequeño tal que an > m
		switch (n){
			case 0:	an=1; break;
			case 1: an=2; break;
			case 2:	an=3; break;
			default:
			   an = 3*a2 - 2*a0;
			   break;
		}
		cout << "a(" << n << ")=" << an << endl;
		n++;
		a0=a1;
		a1=a2;
		a2=an;
	}
}



