#include <iostream>
#include<iomanip>
using namespace std;
main(){
	int opc;
	float n1,km,milla,mt,plg,lb,kl;
	//configurar 2 decimales
	cout<<fixed<<setprecision (2);
	//ingreso de datos
	cout<<"Ingrese una cantidad: ";
	cin>>n1;
	//conversiones
	milla = n1 * 0.621371;
	km = n1 * 1.60934;
	plg = n1 * 39.3701;
	mt = n1 * 0.0254;
	kl = n1 * 0.453592;
	lb = n1 * 2.20462;
	//menu
	cout<<"Que desea realizar con esta cantidad?";
	cout<<"\n1. "<<n1<<" kilometros a millas";
	cout<<"\n2. "<<n1<<" millas a kilometros";
	cout<<"\n3. "<<n1<<" metros a pulgadas";
	cout<<"\n4. "<<n1<<" pulgadas a metros";
	cout<<"\n5. "<<n1<<" libras a kilos";
	cout<<"\n6. "<<n1<<" kilos a libras";
	cin>>opc;
	//resultados
	switch(opc){
		case 1: cout<<n1<<" kilometros, es igual a "<<milla<<" millas";
		break;
		case 2: cout<<n1<<" millas, es igual a "<<km<<" kilometros";
		break;
		case 3: cout<<n1<<" metros, es igual a "<<plg<<" pulgadas";
		break;
		case 4: cout<<n1<<" pulgadas, es igual a "<<mt<<" metros";
		break;
		case 5: cout<<n1<<" libras, es igual a "<<kl<<" kilos;";
		break;
		default: cout<<"No se reconoce esta operacion";
	}}