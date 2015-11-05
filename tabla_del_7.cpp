// Realizamos un programa donde con una sentencia nos salga la tabla de 7 entera.

#include <iostream>
using namespace std;
int main() {
	int t = 0; //Variable que utilizaremos.

	do { //Sentencias que vamos a declarar.
		cout << "7 x " << t << " = " << 7*t << endl;
		t = t + 1;
	}	while (t <= 10); //Condicion para que el bucle termine.
}
