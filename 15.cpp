#include <iostream>
using namespace std;
int main()
{
    const string claveCorrecta = "1234";
    cout << "Bienvenido al cajero automático\n";
    cout << "Ingrese la clave: ";
    string clave = "";
    cin >> clave;
    if (clave != claveCorrecta)
    {
        cout << "Clave incorrecta";
        return 0;
    }
        
    system("cls");
	cout << "Bienvenido\n";
    double fondos = 5000; 

    int opc;

    while (opc != 3)
    {
        cout << "Fondos disponibles: " << fondos << endl;
        cout << "1. Retirar dinero\n2. Depositar dinero\n3. Salir\nSeleccione: ";
        cin >> opc;
        switch(opc){
        case 1:{
            double retiro;
            cout << "Ingrese cantidad a retirar: " << endl;
            cin >> retiro;
            if (retiro > fondos || retiro <= 0){
                cout << "No puede retirar esa cantidad";
            }
            else{
                cout << "Se han retirado " << retiro << endl;
                fondos = fondos - retiro;
				system("pause");
				system("cls");
            }
			break; }
        case 2:{
			double deposito;
			cout<<"Ingrese la cantidad que desea depositar: "<<endl;
			cin>>deposito;
			if(deposito<= 0){
				cout<<"No se puede depositar esta cantidad"<<endl;
			}
			else {
				cout << "Se han depositado< " << deposito << endl;
                fondos = fondos + deposito;
				system("pause");
				system("cls");
			}
			break; }
        }
    }
    return 0;
}