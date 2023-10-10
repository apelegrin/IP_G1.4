#include <iostream>
using namespace std;
struct Fecha{
	int d;
	int m;
	int a;
};

int main() {
	/*Lexico*/
	Fecha fEnt;
	Fecha fSal;
	
	int ddFinMes;
	/*Algoritmo*/
    cout << "Introduce la fecha dd mm aaaa    > ";
    cin >> fEnt.d >> fEnt.m >> fEnt.a;
    
    if ((fEnt.m==4)||(fEnt.m==6)||(fEnt.m==9)||(fEnt.m==11)){
		ddFinMes = 30;}
	else if (fEnt.m==2){
		ddFinMes = 28;}
	else {/*en cualquier otro caso*/
			ddFinMes = 31;}
			
	/*Caso normal no es fin de mes*/
	if (fEnt.d < ddFinMes){
		fSal.d = fEnt.d+1;
		fSal.m = fEnt.m;
		fSal.a = fEnt.a;
	}
	else if (fEnt.m != 12){
		/*Es fin de mes pero no de año*/
		fSal.d = 1;
		fSal.m = fEnt.m+1;
		fSal.a = fEnt.a;
	}
	else{
		fSal.d = 1;
		fSal.m = 1;
		fSal.a = fEnt.a+1;
	}
	cout << "Dia siguiente "<<fSal.d<<" "<<fSal.m<<" "<<fSal.a<<endl;
}
















