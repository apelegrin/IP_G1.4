#include <iostream>
#include <map> // <= Es necesario incluir este archivo de cabecera para usar el map
#include <string>
using namespace std;

const char MF='#';
typedef map<char, int> TipoHistograma;

void asteriscos(int conta){
	int i;
	for (i = 0;i < (conta/10);i++){
		cout << "*";
	}
}
void imprimirHistograma(TipoHistograma h){
	char c;

	for (c = 'a'; c <= 'z'; c=c+1) {
		cout << c << " = ";
		asteriscos(h[c]);
		cout << h[c] << endl;
    }
}

int main () {
	TipoHistograma h;
	char c;
	char EA;
	/* Incializar el histograma */
	for (c = 'a'; c <= 'z'; c=c+1) { h[c] = 0; }
	
	cout << "Introduce un texto # para fin " << endl;
	//Comenzar
	cin.get(EA);
	/*Vemos si es secuencia vacía*/
	if (EA == MF){
		cout << "ERROR Fichero vacío" << endl;
	}
	else{
		while (EA != MF){
			/* Tratamiento EA */
			if ((EA >= 'a') && (EA <= 'z')) {
				h[EA] = h[EA] + 1;
			}
			/* Avanzar */
			cin.get(EA);
		}
	}
	imprimirHistograma(h);
	return 0;
}


