#include <iostream>
using namespace std;
int main() {
	/*Léxico*/
	int ddEntrada, mmEntrada, aaEntrada;
	int ddSalida,  mmSalida,  aaSalida;
	int ultimoDiaMes;
	/*Algoritmo*/
	cout << "Introduce la fecha (dd mm aaaa)     >";
	cin >> ddEntrada >> mmEntrada >> aaEntrada;
	
	if (mmEntrada == 2){
		//no tento en cuenta bisiesto
		ultimoDiaMes = 28;}
	//meses de 30 4, 6, 9 , 11
	else if ((mmEntrada==4)||(mmEntrada==6)||(mmEntrada==9)||(mmEntrada==11)){
		ultimoDiaMes = 30;}
	else {
		ultimoDiaMes = 31;}
		
	if (ddEntrada < ultimoDiaMes){
		/*Si no es fin de mes avanzo día*/
		ddSalida = ddEntrada + 1;
		mmSalida = mmEntrada;
		aaSalida = aaEntrada;
	}
	else if (mmEntrada != 12){
		/*Si no es diciembre avanzo mes*/
		ddSalida = 1;
		mmSalida = mmEntrada+1;
		aaSalida = aaEntrada;
	}	
	else{
		/*Si no avanzo año */
		ddSalida = 1;
		mmSalida = 1;
		aaSalida = aaEntrada + 1;
	}
	cout << "La fecha de salida es "<<ddSalida<<" "<<mmSalida<<" "<<aaSalida<<endl;
}









