#include <iostream>
using namespace std;

int main ()
{
	int diagonal;
	int area;
	
	cout << "informe o valor da diagonal do quadrado: ";
	cin >> diagonal;
	
	area = diagonal * diagonal / 2;
	
	cout << "a area do quadrado es " << area << endl;
	
	return 0;
}