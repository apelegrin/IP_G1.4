#include <iostream>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];
typedef float VectorFloat [N];

void imprimirValores(Vector r,VectorFloat f){
	int i;
	for (i=0; i < N; i++){
		if (r[i] > 0){
		  cout << "Nota[" << i << "] = " 
			   << r[i] << " Frec: " << f[i] << endl;
		}
	}
}
int main(){
	Vector nota;
	VectorFloat frecuencia;
	//Frec relativa = FrecAbs / casos
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
		
		/* Calcular frecuencias relativas*/
		for (i=0; i < N; i++){
			frecuencia[i] = (nota[i] / numEle) * 100;
		}
		
		imprimirValores(nota,frecuencia);
	}
	return 0;
}
