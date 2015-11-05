//Vamos a realizar un programa donde al introducir 3 numeros reales, en la salida nos indique el máximo de ellos.

#include <iostream>
using namespace std;
int main() {
	// Declaramos las variables necesarias.
	double n1, n2, n3;
	//Entrada al programa.
	cout << "Introduzca tres numeros" << endl;
	cin >> n1 >> n2 >> n3;
	//Condicion que queremos que ocurra.
	if (n1>n2) 
		cout << "El primero es el mayor" << endl; 
		else if (n2>n3)	// Sino ocurre la primera condicion.
		cout << "El segundo es el mayor" << endl;
	if (n2<n3)	
		cout << "El tercero es el mayor" << endl; //Sino ocurre la primera ni la segunda
		if (n1==n2==n3) // Sino ocurre ninguna de las anteriores condiciones.
		cout << "Son iguales" << endl;
}


