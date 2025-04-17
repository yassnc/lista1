#include <iostream>
using namespace std;


int main ()

{
	int base;
	int altura;
	int area;
	
	cout << "informe o valor da base do triangulo: ";
	cin >> base;
	
	
	cout << "informe a altura do triangulo: ";
	cin >> altura;
	
	
	area = base * altura / 2;
	
	
	cout << "a area do triangulo es: " <<  area << endl;
	
	
	return 0; 
}