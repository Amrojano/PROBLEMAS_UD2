//Programa para calcular la sumatoria de un numero cualquiera.

#include <iostream>
using namespace std;
int main() {
	int numero = 0, sumatoria = 0; //Variable para el calculo la sumatoria.
	double i;
	cout << "Introduce el numero para calcular su sumatoria: " << endl;
	cin >> numero;

	for (i = 1.0; i <= numero; i++) { //Estructura del bucle "for". 
		sumatoria = sumatoria + i;
		cout << "La sumatoria de " << numero << " es " << sumatoria << endl; //Salida por pantalla del programa.
	}
}
