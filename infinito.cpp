// Vamos a realizar la version 2.0 del programa de calculo de ecuacion de segundo grado, con con sentencia if/else.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	// Declaramos las variables.
	double a, b, c;
	double x1, x2;

	// Entradas del programa.
	cout << "\nIntroduce coeficiente de 2º grado: ";
	cin >> a;
	cout << "\nIntroduce coeficiente del 1er grado: ";
	cin >> b;
	cout << "\nIntroduce coeficiente independiente: ";
	cin >> c;
	x1 = (-b + sqrt ( pow(b,2)-4*a*c) ) / (2*a);
	x2 = (-b - sqrt ( pow(b,2)-4*a*c) ) / (2*a);
	cout << "Las raices son: " << x1 << " y " << x2 << endl;	
	
		
}
