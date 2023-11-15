#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

void guardarFicheroInt (list<int> S, string nombre) {
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

void cargarFicheroInt (list<int> &S, string nombre) {
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
	list<int> S1, S2, R;
	list<int>::iterator EA_S1;
	list<int>::iterator EA_S2;
	
	cargarFicheroInt (S1, "entrada3.1.txt");
	cargarFicheroInt (S2, "entrada3.2.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial */
	EA_S1 = S1.begin();
	EA_S2 = S2.begin();
	while ( (EA_S1 != S1.end()) && (EA_S2 != S2.end()) ) {
		if (*EA_S1 == *EA_S2){ //Si son iguales se registra 
			cout << *EA_S1 << ", ";
			R.push_back(*EA_S1);
			EA_S1++;
			EA_S2++;
		}else if (*EA_S1 < *EA_S2){//Avanzo el menor
		    EA_S1++;
		}
		else {
			EA_S2++;
		}
	}
	guardarFicheroInt (R, "salida3.txt");
    cout << "Fichero guardado" << endl;
	return 0;
}
