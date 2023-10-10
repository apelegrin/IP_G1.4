#include <iostream>
using namespace std;
/*
 * BinDec procedimiento para obtener el equivalente en binario
 * de 4 bits
 * BinDec (dato b4 : Entero,
 * 	       dato b3 : Entero,
 *         dato b2 : Entero,
 *         dato b1 : Entero,
 *         dato_resultado : Entero)
 * 
 * 
 * PRE {b1, b2, b3, b4 :Entero, 0 <= b1 <= 1; 0 <= b2 <= 1; 
 * 		0 <= b3 <= 1; 0 <= b4 <= 1; }
 * POST {resultado: Entero; valor correspondiente en decimal 
 * 	a dato binario definido por b4,b3,b2,b1}
 * 
 */
void BinDec (int b4, int b3, int b2, int b1, int &dec)
{
	dec = b1*1 + b2*2 + b3*4 + b4*8;
}

void Intercambio (char &a, char &b)
{
	char aux;
	aux = a;
	a = b;
	b = aux;
}

int main() {
	int b1, b2, decimal1, decimal2;
	char x, y, z;
	b1 = 0;
	b2 = 1;
	x = 'O';
	y = 'P';
	z = 'Q';
	Intercambio (x, y); //X=O y=P z=Q -> X=P y=O z=Q
	Intercambio (y, z); //X=P y=O z=Q -> X=P y=Q z=O
	BinDec (b1, b2, b1, b2, decimal1);//0 1 0 1 ->5
	BinDec (0, 1, b1, b1, decimal2);  //0 1 0 0 ->4
	
	cout << "Valor de las variables x, y, z es: " << x << y << z << endl;
	cout << "El valor del numero 1 es : " << decimal1 << endl;
	cout << "El valor del numero 2 es : " << decimal2 << endl;
	return 0;
}
