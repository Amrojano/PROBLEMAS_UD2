// Vamos a realizar un programa para la deteccion de datos, menos los negativos, desde un satelite.

#include <iostream>
using namespace std;
int main() {
	int dato; //Variable que necesitamos para el programa.

	for (dato = 1; dato >= 0; dato = dato) { //Formato para realizar los bucles for.
		cin >> dato;
		cout << "Procesando dato..." << endl;
		
		if (dato >= 0) { //Condicion que queremos que se cumpla.
			cout << "Dato recibido: " << dato << endl;
		}
		else cout << "Señal terminada" << endl; //Camino que coge cuando la condicion no es true.
	}
}	
