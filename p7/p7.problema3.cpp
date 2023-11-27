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

bool esPar(int p){
	bool resultado;
	if (p % 2 == 0){
		resultado = true;
	}else{
		resultado = false;
	}
	return resultado;
}

int main()
{
	list<int> S ;
	list<int>::iterator EA;
	list<int>::iterator FDS;
	
	cargarFichero (S, "entrada7_3.txt");
	/* Esquema de búsqueda de primer modelo de acceso secuencial */
	FDS = S.end();
	
	EA = S.begin(); //Comenzar
	while ( (!(EA == FDS)) && (!esPar(*EA)) ){
		//Avanzar
		EA++;
	}
	if(EA == FDS){
		cout << "Elemento no encontrado" << endl;
	}else{
	    cout << "Encontrado el número : " << *EA << endl;
	}
	return 0;
}
