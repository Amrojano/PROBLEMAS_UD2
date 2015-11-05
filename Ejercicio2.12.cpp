//Vamos a realizar una calculadora donde podamos elegir la opcion que queremos utilizar entre suma, resta, multiplicacion o division.

#include <iostream>
using namespace std;
int main() {
	
	char c;	
	double valor1;
	double valor2;
	double suma, resta, multiplicacion, division;
	
	cout << "Introduzca primer valor: " << endl;
	cin >> valor1;
	cout << "Introduzca primer valor: " << endl;
	cin >> valor1;
	cout << "Selecciona una opcion [S]uma/[R]esta/[M]ultiplicacion/[D]ivision" << endl;
	
	switch (c) {
	case 'S':
	case 's':
		cout << "Escogio la opcion suma" << endl;
		suma = valor1+valor2;
		cout << "La suma es: " << suma << endl;
		break;
	case 'R':
	case 'r':
		cout << "Escogio la opcion resta" << endl;
		break;
	case 'M':
	case 'm':
		cout << "Escogio la opcion multiplicacion" << endl;
		break;
	case 'D':
	case 'd':
		cout << "Escogio la opcion division" << endl;
		break;
	}
}
