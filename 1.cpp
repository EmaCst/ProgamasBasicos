#include <iostream>
#include<iomanip>
using namespace std;
main(){
	int opc;
	float n1,n2,suma,resta,multi,divi;
	//configurar 2 decimales
	cout<<fixed<<setprecision (2);

	//ingreso de datos
	cout<<"Ingrese un numero: ";
	cin>>n1;
	cout<<"Ingrese otro numero: ";
	cin>>n2;

	//operaciones
	suma= n1+n2;
	resta= n1-n2;
	multi=n1*n2;
	divi= n1/n2;

	//pregunta
	cout<<"Ingrese el numero de la operacion que desea realizar \n1. Suma \n2 Resta \n3 Multiplicacion \n4 Division\n";
	cin>>opc;

	//menu
	switch(opc){
		case 1:cout<<"la suma de "<<n1<<" + "<<n2<<" es: "<<suma;
		break;
		case 2:cout<<"la resta de "<<n1<<" - "<<n2<<" es: "<<resta;
		break;
		case 3:cout<<"la multiplicacion de "<<n1<<" * "<<n2<<" es: "<<multi;
		break;
		case 4:cout<<"la division de "<<n1<<"/"<<n2<<" es: "<<divi;
		break;
		default: cout<<"No se reconoce la opcion que ingreso";
	}
}