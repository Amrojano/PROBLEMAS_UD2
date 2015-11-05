//Vamos a realizar una calculadora donde podamos elegir la opcion que queremos utilizar entre suma, resta, multiplicacion o division.

#include <<iostream>>
using namespace std;
int main() {
	double a, b;
	cout << "Pulsa [S]uma/[R]esta/[M]ultiplicacion/[D]ivision: ";
	cin >> a, b;
	switch (a+b) {
	case 'S':
	case 's':
		cout << "Resultado de la suma es: ";
		break;
	case 'R':
	case 'r':
		cout << "Resultado de la resta es: ";
		break;
	case 'M':
	case 'm':
		cout << "Resultado de la multiplicacion es: ";
		break;
	case 'D':
	case 'd':
		cout << "Resultado de la division es: ";
		break;
	}
}
