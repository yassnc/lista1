#include <iostream>
using namespace std;


int main ()

{
	int valor1;
	int valor2;
	int valor3;
	int valor4;
	int media;
	
	
	cout << "informe o valor1: ";
	cin >> valor1;
	
	
	cout << "informe o valor2: ";
	cin >> valor2;
	
	
	cout << "informe o valor3: ";
	cin >> valor3;
	
	
	cout << "informe o valor4: ";
	cin >> valor4;
	
	
	media = (valor1 + valor2 + valor3 + valor4) / 4;
	
	
	cout << "a media aritmetica dos valores inseridos es: " << media << endl;
	
	return 0;
}