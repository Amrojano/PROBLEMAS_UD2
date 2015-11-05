//Realizar un programa donde se indica si el valor entero indicado es par o impar.

#include <iostream>
using namespace std;

int main () {
	int valor;
	cout << "introduzca un valor entero distinto de cero: " << endl;
	cin >> valor;
	if (valor % 2== 0) {
		cout << "El valor inroducido es par: " << endl;
	}
	if (valor % 2!=0) {
		cout << "El valor inroducido es impar: " << endl;
	}
}
		
	
		
