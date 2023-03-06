#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
	float rad, vol, alt;
	cout<<"Este Programa permite calcular el volumen de un cono, acontinuacion por favor:";
	cout<<"\nIngrese el valor del radio del cono: ";
	cin>>rad;
	cout<<"Ingrese la altura del cono: ";
	cin>>alt;
	vol= (3.1416*rad*rad*alt)/3;
	cout<<fixed<<setprecision (2);
	cout<<"el volumen del cono es de: "<<vol;
}