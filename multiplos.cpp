//Programa para calcular los multiplos de cualquier numero que el usuario nos introduzca, siempre y cuando esten en un intervalo de numeros, que tambien nos introduzca el usuario.

#include <iostream>
using namespace std;
int main() { //Variables que vamos a introducir en el programa: (y) numero del que queremos sacar los multiplos, (x) numeros de multiplos que contiene y en el intervalo, (IM) valor minimo del intervalo, (IS) valor maximo del intervalo.
	int IM, IS;
	int multiplos = 0, i, y;
	cout << "Introduzca el numero del que queremos sacar los multiplos" << endl,
	cin >> y;
	cout << "Introduzca intervalo minimo" << endl;
	cin >> IM;
	cout << "Introduzca intervalo máximo" << endl;
	cin >> IS;
	for (i = IM; i <= IS; i = i + 1) { // Estructura de nuestra sentencia "for".
		
		if (i % y == 0 ) //Condicion para que nos salga nuestra sentencia.
		multiplos = multiplos + y;
		cout << "Los multiplos de " << y << " son: " << multiplos << endl;
	}
	
}
		 
		
