#include <iostream>
using namespace std; 
int main () 
{
int n1,n2[3],n3[4];
cout<<"\tIngrese un numero: "<<endl;
cin>>n1;
cout<<"\tIngrese otro numero: "<<endl;
cin>>n2[0];
cout<<"\tx---------"<<endl;
n3[0]=n1*n2[0];
n3[1]=n1*n2[1];
n3[2]=n1*n2[2];
n3=n1*n2[0];
cout<<"\t"<<n3[0]<<endl;
cout<<"      "<<n3[1]<<endl;
cout<<"     "<<n3[2]<<endl;
cout<<"\t----------"
}