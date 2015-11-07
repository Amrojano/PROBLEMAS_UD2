// Vamos a ayudar a Bart Simpson a no tener que escribir 10 veces "No debo copiar en clase", que le valga solo con una vez.
#include <iostream>
using namespace std;
int main() {
	int cuenta = 1; // Variable asignada.

	while ( cuenta <=10 ) { //Condicion que queremos para que se realice el programa.
		cout << "No debo copiar en clase" << endl; // Sentencia que se debe de ejecutar.
		cuenta = cuenta + 1;
	}
}
		
