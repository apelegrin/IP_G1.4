#include <iostream>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];

void imprimirValores(Vector r,float n){
	int i;
	float frecuencia;
	//Frec relativa = FrecAbs / casos
	for (i=0; i < N; i++){
		if (r[i] > 0){
		  frecuencia = r[i] / n * 100;
		  cout << "Nota[" << i << "] = " 
			   << r[i] << " Frec: " << frecuencia << endl;
		}
	}
}
int main(){
	Vector nota;
	int EA;
	float numEle;
	int i;
	
	/* Inicializamos la tabla */
	for (i=0; i < N; i++){
		nota[i] = 0;
	}
	
	cout << "Introduce las notas (-1 para fin)" << endl;
	cin >> EA;
	if (EA == MF){
		cout << "Error secuencia vacía " << endl;
	}
	else {
		numEle = 0;
		while (EA != MF){
			/* Procesar EA */
			nota[EA] = nota[EA] + 1;
			numEle = numEle + 1;
			/* Avanzar */
			cin >> EA;
		}
		/* Tratamiento posterior */
		imprimirValores(nota,numEle);
	}
	return 0;
}
