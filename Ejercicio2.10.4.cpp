//Realizaremos un programa donde se escribiran las expresiones booleanas que corresponde a una serie de condiciones.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//Declaramos la variable.
	int A;
	cout << "Introduce un valor entero: ";
	cin >> A;
	//Declaramos la condicion.
	if (A>=1 && A<=3 || A==10 || A==20)
		cout << "El valor es correcto" << endl; // Es el resultado que saldrá si esta dentro de la condicion.
	else cout << "El valor es incorrecto" << endl; // Es el resultado que saldrá si no esta dentro de la condicion.
}
