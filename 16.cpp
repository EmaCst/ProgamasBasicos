#include <iostream> 
#include<iomanip>
#include <cmath> 
using namespace std; 
  
int main() { 
  float n1,n2,hipotenusa; 
  
  cout<< "Ingrese el primer cateto: "<<endl; 
  cin>> n1;
  cout<< "Ingrese el segundo cateto: "<<endl; 
  cin>> n2;
  hipotenusa=sqrt((n1*n1)+(n2*n2));
  cout<<fixed<<setprecision (2);
  cout << "La hipotenusa es: " << hipotenusa << endl; 
} 