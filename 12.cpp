#include <iostream>
using namespace std;
 
int main(void)
{
	int mynum;
	cout << "Ingresa un numero: ";
	cin >> mynum;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "En hexadecimal: " << mynum;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
}