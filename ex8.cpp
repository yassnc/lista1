#include <iostream>
using namespace std;

int main ()

{
	double celsius; 
	double fahrenheit;
	
	
	cout << "informe a temperatura em graus celsius: ";
	cin >> celsius;
	
	fahrenheit = (celsius * 9 / 5) + 32;
	
	cout << "a temperatura equivalente em fahrenheit es: " << fahrenheit << "�F" << endl;
	
	return 0;
}