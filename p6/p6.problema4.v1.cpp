#include <iostream>
using namespace std;

int main()
{
	const char MF='#';
	// Distancia entre los juegos de caracteres mayúsculas y minúsculas:
	char elementoBuscado = 'p';
	char EA; // Elemento actual
	
	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de caracteres, para terminar el carácter #"<<endl;
	cin.get(EA); // Comenzar
	while ((EA != elementoBuscado) && (EA != MF)) { // Condición de finalización
		cout << EA;  // Registrar en la salida
		cin.get(EA); // Avanzar
	}
	//Verificar la condición de finalización
	if (EA == MF){
		cout << "No encontrada la p" << endl;
	}else{
		cout << "Sí encontrada la p" << endl;
	}
	return 0;
}
