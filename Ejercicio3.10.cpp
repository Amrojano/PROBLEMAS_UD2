//Prograama donde vamos a calcular y obtener en pantalla las 10 tablas de multiplicar.
#include <iostream>
using namespace std;
int main() {
	int i, j; // Variables 
	cout << "Calculamos todas las tablas de multiplicar desde el 1 hasta el 10: " << endl; //Entrada.

	for (i = 1; i <= 10; i = i + 1) //Estructura anidada del "for"

		for(j = 1; j <= 10; j=j+1)
			cout <<  i << " x " << j << " = " << i*j << endl; //Entrada.
}
