#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float cel, far;
	cout<<"Este programa convierte una cantidad de grados celsius a fahrenheit\n";
	cout<<"Ingrese la cantidad de grados celsius que quiera convertir a fahrenheit: ";
	cin>>cel;
	far=(cel*9/5)+32;
	cout<<fixed<<setprecision (2);
	cout<<cel<<" grados celcsius convertidos en fahrenheit son: "<<far;
}