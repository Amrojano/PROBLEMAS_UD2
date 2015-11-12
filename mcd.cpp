// Programa para calcular el maximo comun divisor (mcd) de 2 numeros enteros.

#include <iostream>
using namespace std;
int main() {
	int a, b, resto;
	cout << "Introduce un valor: ";
	cin >> a;
	cout << "Introduce un valor: ";
	cin >> b;
	resto = a%b;

	while (resto != 0) {
		a = b;
		b = resto;
		resto = a%b;
	}
	cout << "El mcd es: " << b << endl;
}
