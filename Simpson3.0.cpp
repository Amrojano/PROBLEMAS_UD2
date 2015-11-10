// Vamos a ayudar a Bart Simpson a no tener que escribir 10 veces "No debo copiar en clase", que le valga solo con una vez.

#include <iostream>
using namespace std;
int main() {
	int castigo = 1;
	for ( castigo = 1; castigo <= 10; castigo = castigo + 1) { //Sentencia del bucle.
		cout << castigo << " No debo copiar en clase" << endl; //Salida del programa.
	}
}	
