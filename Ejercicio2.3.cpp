//Programa para ver que ucurre si se le quitan las dos llaves a la sentencia if.

#include <iostream>
using namespace std;
int main() {
	// Declaracion de la variable.
	int dato;
	// Entradas del programa.
	cout << "Introduzca un valor entero distinto de cero: " << endl;
	cin >> dato;
	//Primera condicion que queremos que se cumpla.
	if (dato!=0) 
	
		cout << "Ha escrito " << dato << " que es distinto de cero" << endl;
		cout << "Es un alumno muy obediente" << endl;
	//Segunda condicion sino se cumple la primera.
	if (dato==0)
		cout << "Ups! que desobediente..." << endl;		
}
// Al quitarle las llaves a la sentencia if el resultado es que al no cumplirse la primera condicion sale la segunda condicion pero con la linea 15 tambien sale por pantalla.
