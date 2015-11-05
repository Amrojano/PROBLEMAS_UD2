// Vamos a ayudar a Bart Simpson a no tener que escribir 10 veces "No debo copiar en clase", que le valga solo con una vez.

#include <iostream>
using namespace std;
int main() {
	int castigo = 1;
	do { //Sentencia del bucle.
		cout << "No debo copiar en clase" << endl; //Salida del programa.
		castigo = castigo + 1;
	} while (castigo <= 10); // Condicion que queremos que se cumpla para que termine el bucle.
}
	
