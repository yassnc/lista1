#include <iostream>
using namespace std;

int main ()

{
	double cotacao;
	double dolares;
	double reais;
	
	
	cout << "informe o valor em dolares: ";
	cin >> dolares;
	
	
	cotacao = 5.2;
	reais = cotacao * dolares;
	
	 
	cout << "o valor em reais es: R$ " << reais << endl;
	
	return 0;
}