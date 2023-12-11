#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];

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

int hayMayor50(Vector r,float n){
	int i;
	int resultado;
	i = 0;
	resultado = -1;
	/* Recorrer la tabla mientras (no fin de tabla) o no encontrado*/
	while ( (i < N) && ( (r[i]/n) < 0.5) ){
		//avanzar
		i++;
	}
	/* Determina la condición de fin */
	if (i != N){ //Si i != n finalizamos antes del final
		resultado = i;
	}
	return resultado;
}

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
	list<int> S;
	list<int>::iterator EA;
	Vector nota;
	float numEle;
	int i;
	
	cargarFichero(S,"notas.txt");
	
	/* Inicializamos la tabla */
	for (i=0; i < N; i++){
		nota[i] = 0;
	}
	
	cout << "Procesando datos..." << endl;
	EA = S.begin(); //Comenzar
	if (EA == S.end() ){
		cout << "Error secuencia vacía " << endl;
	}
	else {
		numEle = 0;
		while (EA != S.end()){
			/* Procesar EA */
			nota[*EA] = nota[*EA] + 1;
			numEle = numEle + 1;
			/* Avanzar */
			EA++;
		}
		/* Tratamiento posterior */
		imprimirValores(nota,numEle);
		cout << "Buscando frec >= 50% = " << hayMayor50(nota,numEle) << endl;
	}
	return 0;
}
