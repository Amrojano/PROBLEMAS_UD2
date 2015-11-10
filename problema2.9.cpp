//Programa donde se lea la posicion de dos circunferencias y escriba informacion sobre su relacion.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double centro1, centro2, radio;
	cout << "Valor de la primera circunferencia: ";
	cin >> centro1;
	cout << "Valor de la segunda circunferencia: ";
	cin >> centro2;
	cout << "Valor del radio: ";
	cin >> radio;

	if (centro1==centro2)
		cout << "Es la misma circunferencia" << endl;
	else if (centro1!=centro2)
		cout << "Una circunferencia esta dentro de la otra" << endl;
		else cout << "Numero de corte entre las circunferencias" << endl; 


}
