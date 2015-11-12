//Programa para obtener todas las fichas de dominó.
#include <iostream>
using namespace std;
int main() {
	int i, j; // Variables 
	cout << "Obtencion de todas las fichas de dominó: " << endl; //Entrada.

	for (i = 0; i <= 6; i++) //Estructura anidada del "for"
		for(j = 0; j <= 6; j++)
			cout << i << "," << j << endl;
}
