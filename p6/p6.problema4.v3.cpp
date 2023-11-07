#include <iostream>
using namespace std;

int main()
{
	const int MF=-100;
	// Distancia entre los juegos de caracteres mayúsculas y minúsculas:
	int EA; // Elemento actual
	
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de números, para terminar -100 "<<endl;
	cin >> EA; // Comenzar
	while ((EA != MF) && ((EA % 2)!=0)) { // Condición de finalización
		cin >> EA;  // Avanzar
	}
	//Verificar la condición de finalización
	if (EA == MF){
		cout << "No encontrado número par " << endl;
	}else{
		cout << "Sí encontrado número par " << EA << endl;
	}
	return 0;
}
