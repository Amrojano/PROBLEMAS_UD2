// Realizamos un programa donde con una sentencia nos salga la tabla de multiplicar de cualquier numero entera.

#include <iostream>
using namespace std;
int main() {
	//Variables que necesitamos para clacular las tablas de multiplicar.
	int t = 1, n = 0;
	cout << "Introduzca la tabla que quiere realizar: " << endl;
	cin >> n;
	cout << "Usted ha introducido la tabla del " << n << endl;

	while (t <= 10) { // Condicion que queremos que se cumpla.
		cout << t << " x " << n << " = " << t*n << endl;
		t = t + 1;
	}
}
