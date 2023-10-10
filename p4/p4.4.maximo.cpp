#include <iostream>
using namespace std;

int Max2 (int a, int b)
{
	int mayor;
	
	if (a > b) {
		mayor = a; }
	else {
	mayor = b; }
	return mayor;
}
/*
 * Max3(dato a  : Entero,
 * 		dato b  : Entero,
 * 		dato c  : Entero): accion retorna el mayor
 *
 * PRE  {a,b,c : Entero } 
 * POST {Max3  : Entero, 
 *       Max3  devuelve el mayor de a,b,c}
 */
int Max3(int a, int b, int c){
	int mayor;
	mayor = Max2(a,b);
	return Max2(mayor,c);
}

int main() {
	int v1, v2, v3;
	cout << "Introduce 3 números (a b c) ";
	cin >> v1 >> v2 >> v3;
	cout << "El mayor es " << Max3(v1,v2,v3) << endl;
	return 0;
}
