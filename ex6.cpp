#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
	double a;
	double b;
	double media;
	
	
	cout << "informe o valor de a: ";
	cin >> a;
	
	
	cout << "informe o valor de b: ";
	cin >> b;
	
	
	media = sqrt (a * b);
	
	
	cout << "a media geometrica de a e b es: " << media << endl;
	
	return 0;
}