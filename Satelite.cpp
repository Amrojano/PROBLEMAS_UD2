// Satelite que realiza transmision de datos indefinidos que termina con un numero negativo.

#include <iostream>
using namespace std;
int main() {
	int dato; //Declaramos la variable

	do { //Sentencia del bucle.
		cin >> dato; //Salida del programa.
		cout << "Recibido: " << dato << endl;
	}	while (dato >= 0);
	cout << "Fin transmision" << endl;
} 
