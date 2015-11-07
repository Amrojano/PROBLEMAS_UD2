//Vamos a realizar un programa donde nos calcule automaticamente la tabla de multiplicar del numero 7.
#include <iostream>
using namespace std;
int main() {
	int t = 1; //Variable de nuestra tabla de multiplicar.

	while (t <= 10) { // Condicion que queremos que se cumpla para terminar el bucle.
		//Sentencias para que se realice el programa.
		cout << t << " x 7 " << " = " << t*7 << endl;
		t = t + 1;
	}
}



