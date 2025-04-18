#include <iostream>
using namespace std;

int main ()

{
	double milhas;
	double quilometros;
	double conversao;
	
	
	cout << "informe o valor em milhas maritimas: ";
	cin >> milhas;
	
	
	conversao = (quilometros = milhas * 1852 / 1000);
	
	
	cout << milhas << "milhas maritimas equivale a " << quilometros << " quilometros. " << endl;
	
	return 0;
}