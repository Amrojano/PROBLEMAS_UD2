//Programa para calcular el factorial de un numero cualquiera (n!).

#include <iostream>
using namespace std;
int main() {
	int numero = 1, factorial = 1; //Variable para el calculo del factorial.
	int i;
	cout << "Introduce el numero para calcular su factorial: " << endl;
	cin >> numero;

	for (i = 1; i <= numero; i++) { //Estructura del bucle "for". 
		factorial = factorial*i;
		cout << "El factorial de " << numero << " es " << factorial << endl; //Salida por pantalla del programa.
	}
}
