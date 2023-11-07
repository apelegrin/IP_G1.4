#include <iostream>
using namespace std;
int main()
{
	const int MF=-100;
	int EA; // Elemento actual
	int cuadrado; // Elemento cuadrado
	
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de de números [-99,99], para terminar el -100"<<endl;
	cin >> EA; // Comenzar
	while (EA != MF) { // Condición de finalización
		cuadrado = EA * EA; // tratamiento del EA
		cout << cuadrado << ", "; // Registrar en la salida
		cin >> EA; // Avanzar
	}
	return 0;
}
