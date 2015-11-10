//Programa para clacular la tabla de multiplicar del 7, directamente con la estructura del "for".

#include <iostream>
using namespace std;
int main() {
	int t = 1; //Variable para el calculo de la tabla de multiplicar.

	for (t = 1; t <= 10; t = t + 1) { //Estructura del bucle "for".
		cout << t << " x 7" << " = " << 7*t << endl; //Salida por pantalla del programa.
	}
}

