#include <iostream>
using namespace std;
int main() {
	/*Léxico*/
	int periodo; /*Tiempo de 1 a 24 meses*/
	float interesMensual, interesTotal;
	float cantidadPrestada,cantidadDevolver;
	float cantidadMensual;
	char clienteRiesgo;
	/*Algoritmo*/
	cout << "Introduce la cantidad a prestar     >";
	cin >> cantidadPrestada;
	cout << "Introduce el tiempo en meses (1-24) >";
	cin >> periodo;
	cout << "Introduce el interés mensual        >";
	cin >> interesMensual;
	cout << "¿Cliente de riesgo (s/n) ?          >";
	cin >> clienteRiesgo;
	if ((periodo >= 1) && (periodo <= 24)){
		interesTotal = periodo * interesMensual / 100;
		cantidadDevolver = cantidadPrestada * (1.0 + interesTotal);
		if((clienteRiesgo=='s') || (clienteRiesgo=='S')){
			cantidadDevolver = cantidadDevolver * 1.01; }
		cantidadMensual = cantidadDevolver / periodo;
		cout << "La cuota mesual es de " << cantidadMensual << endl;
		cout << "La cantida a devolver es de "<< cantidadDevolver << endl;
	}
	else {
		cout << "ERROR en el periodo debe estar entre 1 y 24" << endl;
	}	
}









