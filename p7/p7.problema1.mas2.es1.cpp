#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

void guardarFichero (list<float> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
	ofstream f;
	list<float>::iterator EA;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			f << *EA << " ";
			EA++;
		}
		f << endl;
		f.close();
	}
}

void cargarFichero (list<float> &S, string nombre) {
	ifstream f;
	float dato;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear ();
		while (f >> dato) { // mientras la lectura sea exitosa
			S.push_back (dato); // Registrar (S, dato)
		}
		f.close();
	}
}

int main()
{
	list<float> S;
	list<float>::iterator EA;
	
	float media;
	float menor40;
	float entre40y50;
	float mayor50;
	float sumaPesos;
	cargarFichero (S, "entrada7_1.txt");
	/* Primer esquema de recorrido del segundo modelo de acceso secuencial */
	EA = S.end(); //Comenzar 2º MAS
	menor40 = 0;
	entre40y50 =0;
	mayor50 = 0;
	sumaPesos = 0;
	while (!(EA == S.begin()) ) { //Mientra no es último
		//Avanzar
		EA--;
		//Procesar
		if (*EA < 40){
			menor40++;
		} else if (*EA <= 50){
			entre40y50++;
		} else {
			mayor50++;
		}
		sumaPesos = sumaPesos + *EA;
	}
	//Tratamiento posterior
	if ((menor40+entre40y50+mayor50) > 0){
		media = sumaPesos / (menor40+entre40y50+mayor50);
		cout << "La media es : " << media << endl;
		cout << "Menores a 40  hay : " << menor40 << endl;
		cout << "Entre 40 y 50 hay : " << entre40y50 << endl;
		cout << "Mayores a 50  hay : " << mayor50 << endl;
	}else {
		cout << "Secuencia vacía " << endl;
	}
	return 0;
}
