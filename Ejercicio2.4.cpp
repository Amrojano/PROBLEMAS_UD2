// Vamos a crear un programa que lea un numero real, correspondiente al radio de un circulo. Como resultado, escribirá el radio introducido, el area del circulo y la longitud de su perimetro. Comprobara tambien si el radio no es positivo, en cuyo caso se obtendra un mensaje informando sobre ello.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//Declaramos la variables que necesitamos.
	double radio;
	double PI;
	PI = 3.1415;
	//Entradas al programa.
	cout << "Introduce el radio de un circulo: ";
	cin >> radio;
	//Condicion primera que queremos que salga en las salidas del programa.
	if (radio >= 0) {
		cout << "Radio del circulo: " << radio << endl;		
		cout << "Area del circulo: " << PI*radio*radio << endl;
		cout << "Longitud del perimetro: " << 2*PI*radio << endl;
	}
	//Condicion que saldrá sino se cumple la primera condicion.
	if (radio < 0) 	
		cout <<  "El radio no es positivo" << endl;
	
}
 
