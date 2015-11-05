//Vamos a realizar un programa donde al introducir 1 numero real, en la salida nos indique el tipo de nota que tiene dependiendo de el valor de la nota.

#include <iostream>
using namespace std;
int main() {
	// Declaramos las variables necesarias.
	double nota;
	//Entrada al programa.
	cout << "Introduzca la nota" << endl;
	cin >> nota;
	//Condicion que queremos que ocurra.
	if (nota>=1.0 && nota<5.0) 
		cout << "Suspenso" << endl; 
		else if (nota>=5.0 && nota<7.0)
		cout << "Aprobado" << endl;	// Sino ocurre la primera condicion.
		else if (nota>=7.0 && nota<9.0)	
		cout << "Notable" << endl; //Sino ocurre la primera ni la segunda
		else if(nota>=9.0 && nota<=10)		
		cout << "Sobresaliente" << endl; // Sino ocurre ninguna de las anteriores condiciones.
}

