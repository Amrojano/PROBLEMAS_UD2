//Nos piden un programa donde tenemos que calcular si un numero entero es cuadrado perfecto, pero sin utilizar la funcion sqrt.
#include <iostream>
using namespace std;
int main() {
	int n = 1, cp = 0; //Variables
	cout << "Vamos a calcular si el numero entero que introduzca es un cuadrado perfecto" << endl; // Salida de la operacion.
	cout << "Por favor, introduzca el numero que desee: " << endl; //Salida
	cin >> n; //Entrada
	
	while (cp < n) { //Condicion que queremos que salga para que se repita el bucle.
		if (cp == n*n) {
		cout << "Es cuadrado perfecto" << endl;
		}
		if (cp != n*n)
		cout << "No es un cuadrado perfecto" << endl;
	}
}
