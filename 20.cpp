#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
	int vec1[2], vec2[2], esc, res1[2], res2[2];
	cout<<"Este Programa permite obtener el vector escalar de dos vectores y los multiplica por si mismos"<<endl;
	cout<<"Escriba la coordenada x del vector 1: "<<endl;
	cin>>vec1[0];
	cout<<"Escriba la coordenada y del vector 1: "<<endl;
	cin>>vec1[1];
	cout<<"Escriba la coordenada x del vector 2: "<<endl;
	cin>>vec2[0];
	cout<<"Escriba la coordenada y del vector 2: "<<endl;
	cin>>vec2[1];
	esc = vec1[0] * vec2[0] + vec1[1] * vec2[2];
	res1[0] = esc * vec1[0];
	res1[1] = esc * vec1[1];
	res2[0] = esc * vec2[0];
	res2[1] = esc * vec2[1];
	cout<<"El numero escalar obteneido es: "<<esc<<endl;
	cout<<"\nEl resultado del vector 1 x el escalar es: ("<<res1[0]<<","<<res1[1]<<")"<<endl;
	cout<<"\nEl resultado del vector 2 x el escalar es: ("<<res2[0]<<","<<res2[1]<<")"<<endl;
}