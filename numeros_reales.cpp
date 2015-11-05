// Realizamos un programa donde se va buscando numeros reales distintods de cero.

#include <iostream>
using namespace std;
int main() {
	double valor1 = 0.0; //Variable que utilizaremos.
	double valor2 = 0.0;
	
	cout << "Introduzca el primer numero: " << endl;
	cin >> valor1;
	cout << "Introduzca el segundo numero: " << endl;
	cin >> valor2;
	
	do { //Sentencias que vamos a declarar.
		cout << "Numero real" << endl;

	}	while ((valor1 != 0) && (valor2 != 0)); //Condicion para que el bucle termine.
	cout << "Numero no permitido" << endl;
}
