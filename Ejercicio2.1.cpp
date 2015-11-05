//Realizar un programa donde se indica cual de los dos valores reales que se introduce es mayor.

#include <iostream>
using namespace std;

int main () {
	//introducimos las variables que vamos a necesitar.
	int a, b;
	//le decimos al usuario las instrucciones para poder utilizar el programa.
	cout << "Introduzca un valor entero para a: "; //le pedimos al usuario que introduzca un valor para a.
	cin >> a;
	cout << "Introduzca un valor entero para b: "; //le pedimos al usuario que introduzca un valor para b.
	cin >> b;
	if (a > b) {
		cout << "a es mayor que b: " << endl;
	}

	if (b > a) {
		cout << "b es mayor que a: " << endl;
	}
} 
	
	
