#include <iostream>
#include <string>
using namespace std;
int main() {
    string txt;
    int aux = 0, igual = 0;
    //ingreso de datos
    cout << "Ingrese un numero o una palabra: ";
    getline(cin >> ws, txt);
    //verificacion
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
}