//Calcula las sumas parciales
#include <iostream>
using namespace std;
int main()
{
	const int MF=-1;
	int EA; // Elemento actual
	int sumas; 
	
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de de enteros >= 0 para terminar el -1"<<endl;
	sumas = 0;
	while (cin >> EA && EA != MF) { // Condición de finalización
		// Este es el tratamiento del EA
		sumas = sumas + EA;
		cout << sumas << ", ";
	}
	return 0;
}
