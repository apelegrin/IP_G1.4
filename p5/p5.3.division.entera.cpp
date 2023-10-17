#include <iostream>
using namespace std;

void divisionEntera(int dividendo,int divisor,
					int &cociente,int &resto){
	resto = dividendo;
	cociente = 0;
	while (resto >= divisor){
		resto = resto - divisor;
		cociente = cociente + 1;
	}
}

int main () {
	int dividendo, divisor, cociente, resto;
	cociente = 0;
	resto = 0;
	cout << "Introduce dividendo y divisor > ";
	cin >> dividendo >> divisor;
	divisionEntera(dividendo,divisor,cociente,resto);
	cout << dividendo << "/" << divisor << "="<< cociente
	     << " resto=" << resto << endl;
	cout << "prueba " << dividendo << "=" 
		 << divisor*cociente+resto << endl;
}



