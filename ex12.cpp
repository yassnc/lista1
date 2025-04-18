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
 	
 	
 	cout << "informe o valor 1: ";
 	cin >> valor1;
 	
 	
 	cout << "informe o valor 2: ";
 	cin >> valor2;
 	
 	
 	cout << "informe o valor 3: ";
 	cin >> valor3;
 	
 	
 	cout << "informe o valor 4: ";
 	cin >> valor4;
 	
 	
 	cout << "informe o valor 5: ";
 	cin >> valor5;
 	
 	
 	cout << "informe o valor pago: ";
 	cin >> valorpago;
 	
 	
 	total = valor1 + valor2 + valor3 + valor4 + valor5;
 	troco = valorpago - total;
 	
 	
 	cout << " o valor total es: R$ " << total << endl;
	 
	 
    cout << " valor pago: R$ " << valorpago << endl;
	 
	 
    cout << " troco: R$ " << troco << endl;
 	
 	
 	return 0;
 }