//Realizaremos un programa donde se escribiran las expresiones booleanas que corresponde a una serie de condiciones.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	//Declaramos la variable.
	int A;
	cout << "Introduce un valor entero: ";
	cin >> A;
	
	if (A<=-5 || A>=3)
		cout << "El valor es correcto" << endl;
	else cout << "El valor es incorrecto" << endl;
}
