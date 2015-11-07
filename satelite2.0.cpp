// Vamos a realizar un programa para la deteccion de datos, menos los negativos desde un satelite.

#include <iostream>
using namespace std;
int main() {
	int dato;
	cout << "Introduccion de la señal del satelite: " << endl;
	cin >> dato;
	
	while (dato >=0) { //Declaramos la condicion que queremos que se cumpla.
		cout << "Señal recibida" << endl;//Cuando el dato introducido es true y vuelve a hacer el bucle.
		cin >> dato;}

		cout << "Señal terminada" << endl; //Cuando el dato introducido es false.
}
		
	
