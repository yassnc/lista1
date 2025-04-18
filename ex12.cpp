#include <iostream>
using namespace std;

int main ()

{
	double valor1;
	double valor2;
	double valor3;
	double valor4;
	double valor5;
	double total;
	double valorpago;
	double troco;
	
	
	cout << "informe o valor1: ";
	cin >> valor1;
	
	
	cout << "informe o valor2: ";
	cin >> valor2;
	
	
	cout << "informe o valor3: ";
	cin >> valor3;
	
	
	cout << "informe o valor4: ";
	cin >> valor4;
	
	
	cout << "informe o valor5: ";
	cin >> valor5;
	
	
	cout << "informe o valorpago: ";
	cin >> valorpago;
	
	
	total = valor1 + valor2 + valor3 + valor4 + valor5;
	troco = valorpago - total;
	
	
	cout << " o valor total es: " << total << ", se pago com: " << valorpago << ", o troco sera de: " << troco << endl;
	
	
	return 0;
}