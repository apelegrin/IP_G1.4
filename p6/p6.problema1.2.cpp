#include <iostream>
//Ojo tiene un error
using namespace std;
int main()
{
	const int MF=-1;
	int EA; // Elemento actual
	int conta; 
	
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de de números >= 0 para terminar el -1"<<endl;
	//cin >> EA; // Comenzar
	conta = 0;
	while (EA != MF) { // Condición de finalización
		cin >> EA; // Avanzar
		// Este es el tratamiento del EA
		cout << EA << ", ";
		conta = conta + 1;
	}
	cout << "El número de procesados es: " << conta << endl;
	return 0;
}
