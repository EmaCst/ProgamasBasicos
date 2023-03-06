#include<iostream>
#include<iomanip>
#include<cmath>
#include <string>
using namespace std;
int opc;
main(){
	while(opc == 21){
	cout<<"Biencenido al menu de Programas Basicos"<<endl;
	cout<<"1.Suma, Resta, Multiplicacion y Division de dos numeros \n2. Determinar si un numero es par o impar \n3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa";
	cout<<"\n4. Determinar si una palabra o un numero es palindromo. \n5. Conversion de numeros arábigos a romanos (minimo 1,000) \n6. Conversion de numeros enteros a letras";
	cout<<"\n7. Conversion de numeros enteros con decimal a letras \n8. Una tabla de multiplicar \n9. Todas las tablas de multiplicar del 1 al 10 \n10. Crear de forma grafica la multiplicacion manual(En Proceso)";
	cout<<"\n11. Conversion de numeros decimales a binario \n12.Conversion de numeros decimales a hexadecimales \n13. Crear Figuras Geometricas Basicas.(En Proceso) \n14. Mover un punto en toda la pantalla";
	cout<<"\n15. Simulacion de un Cajero (Autómata) \n16. Calcular la hipotenusa \n17. SORPRESA \n18. SORPRESA \n19. SORPRESA \n20. SORPRESA \n21. Salir \n Elija una opcion";
	cin>>opc;
	switch(opc){
		/*case 1:{	
		int opc;
		float n1,n2,suma,resta,multi,divi;
		cout<<fixed<<setprecision (2);
		cout<<"Ingrese un numero: ";
		cin>>n1;
		cout<<"Ingrese otro numero: ";
		cin>>n2;
		suma= n1+n2;
		resta= n1-n2;
		multi=n1*n2;
		divi= n1/n2;
		cout<<"Ingrese el numero de la operacion que desea realizar \n1. Suma \n2 Resta \n3 Multiplicacion \n4 Division\n";
		cin>>opc;
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
			break;
		}
	*/	case 2:{
		int n1;
		cout<<"Ingrese un numero: ";
		cin>>n1;
		if (n1 / 2 == 0)
    		cout<<"Es par";
		else 
			cout<<"Es impar";
			break;}
		case 3:{
		int opc;
		float n1,km,milla,mt,plg,lb,kl;
		cout<<fixed<<setprecision (2);
		cout<<"Ingrese una cantidad: ";
		cin>>n1;
		milla = n1 * 0.621371;
		km = n1 * 1.60934;
		plg = n1 * 39.3701;
		mt = n1 * 0.0254;
		kl = n1 * 0.453592;
		lb = n1 * 2.20462;
		cout<<"Que desea realizar con esta cantidad?";
		cout<<"\n1. "<<n1<<" kilometros a millas";
		cout<<"\n2. "<<n1<<" millas a kilometros";
		cout<<"\n3. "<<n1<<" metros a pulgadas";
		cout<<"\n4. "<<n1<<" pulgadas a metros";
		cout<<"\n5. "<<n1<<" libras a kilos";
		cout<<"\n6. "<<n1<<" kilos a libras";
		cin>>opc;
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
			}
			break;
		}
		case 4:{
			string txt;
    int aux = 0, igual = 0;
    cout << "Ingrese un numero o una palabra: ";
    getline(cin >> ws, txt);
    for(int ind = txt.length() - 1; ind >= 0; ind--) {
        if(txt[ind] == txt[aux]) {
            igual++;
        }
        aux++;
    }
    if(txt.length() == igual) {
        cout << "La palabra/numero ingresado es palindromo" << endl;
    } else {
        cout << "La palabra/numero ingresado no es palindromo" << endl;
    }
			break;
		}
		case 21: cout<<"Saliendo..."<<endl; break;
		default: cout<<"No se reconoce esa opccion"<<endl;
	}
}
}