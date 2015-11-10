//Programa para calcular si un numero es primo o no.

#include <iostream>
using namespace std;
int main() {
	int n, i, divisor; //Variable para el calculo del programa.
	cout << "Introduce el numero: " << endl;
	cin >> n;
	divisor = 0;

	for (i = 1; i <= n; i++) { //Estructura del bucle "for". 
		if (n%i==0) {	//Condicion si el resto es igual a cero.	
		divisor = divisor + 1;
		}
	}
	if (divisor == 2) {
		cout << "El numero es primo" << endl; //Salida por pantalla del programa.
	}
	else cout << "El numero no es primo" << endl;
}
