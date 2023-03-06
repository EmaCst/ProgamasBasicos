#include <string>
#include <iostream>

using namespace std;

int main() {
    cout << "Ingrese un numero positivo: "<<endl;
    int n1;
    string bin = "";
    cin >> n1;
    if (n1 > 0) {
        while (n1 > 0) {
            if (n1%2 == 0) {
                bin = "0"+bin;
            } else {
                bin = "1"+bin;
            }
            n1 = (int) n1/2;
        }
    } else if (n1 == 0) {
        bin = "0";
    } else {
        bin = "No se puede realizar la operacion";
    }
    cout <<"El resultado de la operacion es: " << bin<<endl;
}