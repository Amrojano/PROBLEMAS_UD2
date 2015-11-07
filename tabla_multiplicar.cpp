// Realizamos un programa donde con una sentencia nos salga la tabla de multiplicar de cualquier numero entera.

#include <iostream>
using namespace std;
int main() {
	int t = 1; //Variable que utilizaremos.
	int n = 1;	

	do { //Sentencias que vamos a declarar.
		cout << "Introduce la tabla de multiplicar que quiere calcular: ";
		cin >> n;
		cout << n << " x " << t << " = " << n*t << endl;
		t = t + 1;
	}	while (t <= 10); //Condicion para que el bucle termine.
}
