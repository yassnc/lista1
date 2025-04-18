#include <iostream>
#include <cmath>
using namespace std;

int main ()

{
	double diametro;
	double raio;
	double area;
	double PI;

		
	cout << "informe o diametro do circulo: ";
	cin >> diametro;
	
	PI = 3.14;
	raio = diametro / 2;
	area = PI *(raio * raio);
	
	
	cout << "a area do circulo es: " << area << endl;
	
	return 0;
}