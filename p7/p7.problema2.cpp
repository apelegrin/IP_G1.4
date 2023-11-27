#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

void guardarFichero (list<int> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
	ofstream f;
	list<int>::iterator EA;

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

void cargarFichero (list<int> &S, string nombre) {
	ifstream f;
	int dato;

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
	list<int> S, R;
	list<int>::iterator EA;
	int anterior;
	int conta;
	
	cargarFichero (S, "entrada7_2.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial */
	EA = S.begin(); //Comenzar
	anterior = 0;
	if (EA == S.end()){
		//Tratamiento de la Sec.Vacía
		cout << "Secuencia vacía" << endl;
	}else {
		//Trata primer elemento
		anterior = *EA;
		conta = 1;
		do { 				//iterar
			EA++; //avanzar
			if (EA == S.end()) break;
			//tratamiento EA
			R.push_back(*EA+anterior);
			cout << *EA+anterior << " ";
			anterior = *EA;
			conta++;
		}while (true);  	//fin_iterar
	}
	cout << "Terminado" << endl;
	if (conta == 1){
		cout << "Secuencia vacía" << endl;
	}
	return 0;
}
