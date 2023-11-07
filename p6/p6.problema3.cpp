//Calcula las sumas parciales
#include <iostream>
using namespace std;
int main()
{
	const int FDS=-1;
	int EA; // Elemento actual
	int ant, conta;
	ant = 0;	
	// Tercer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de de enteros >= 0 para terminar el -1"<<endl;
	//Comenzar
	cin >> EA;
	if (EA == FDS){
	   //Trat. secuencia vacía
	   cout << "La secuencia está vacía" << endl;
	}
	else {
	   //Trat. Primer elemento
	   ant = EA;
	   conta = 1;
	   do {                       //ITERAR
	     cin >> EA;//Avanzar
		 if (EA == FDS) { break;} //DETENER FDS;
	     //Trata. EA
	     cout << EA + ant << ", ";
	     ant = EA;
	     conta = conta + 1;
	   }while (true);             //FIN_ITERAR;
	   // Terminación Trat.
	   if (conta == 1){
		   cout << "La secuencia está vacía" << endl;
	   }
	}
	return 0;
}
