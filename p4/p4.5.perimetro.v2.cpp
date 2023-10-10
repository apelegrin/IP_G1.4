#include <iostream>
#include <cmath>
using namespace std;

struct Punto {
	float abscisa, ordenada;
};

struct Triangulo {
	Punto p1, p2, p3;
};
	
/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
float sqr (float x)
{
	return (x*x);
}
/* Pre: p1, p2 son Puntos de un espacio euclídeo bidimensional*/
/* Post: Devuelve la distancia entre ambos puntos */
float distancia(Punto p1, Punto p2){
   return sqrt ( sqr (p1.abscisa - p2.abscisa) +
	sqr (p1.ordenada - p2.ordenada));
}

void leerTriangulo(Triangulo &t1){
	cout << "Introduce p1 (x y) ";
	cin >> t1.p1.abscisa >> t1.p1.ordenada;
	cout << "Introduce p2 (x y) ";
	cin >> t1.p2.abscisa >> t1.p2.ordenada;
	cout << "Introduce p3 (x y) ";
	cin >> t1.p3.abscisa >> t1.p3.ordenada;
}

float perimetro(Triangulo t1){
	float l1,l2,l3;
	l1 = distancia(t1.p1,t1.p2);
	l2 = distancia(t1.p2,t1.p3);
	l3 = distancia(t1.p1,t1.p3);
	return l1+l2+l3;
}

int main() {

	Triangulo miTriangulo;
	/* Introducción de datos */
	leerTriangulo(miTriangulo);
	cout << "El perímetro es: " << perimetro(miTriangulo) << endl;
	return 0;
}
