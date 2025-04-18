#include <iostream>
#include <cmath>
using namespace std;

int main ()

{
	double x;
	double y;
	double resultado;
	
	
	cout << "informe o valor de x (base): ";
	cin >> x;
	
	
	cout << "informe o valor de y (expoente): ";
	cin >> y;
	
	
	resultado = pow(x, y);
	
	
	cout << x << " elevado a " << y << " es: " << resultado << endl;
	
	
	return 0;
}