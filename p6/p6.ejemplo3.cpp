#include <iostream>
using namespace std;
int main()
{
	const float MF=-1;
	float EA; // Elemento actual
	float conta; // Elemento cuadrado
	
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de de números [-99,99], para terminar el -100"<<endl;
	cin >> EA; // Comenzar
	conta = 0;
	while (EA != MF) { // Condición de finalización
		// Este es el tratamiento del EA
		if (EA >= 5.0){
			conta = conta + 1;
		}
		cin >> EA; // Avanzar
	}
	cout << "El número de aprobados es: " << conta << endl;
	return 0;
}
