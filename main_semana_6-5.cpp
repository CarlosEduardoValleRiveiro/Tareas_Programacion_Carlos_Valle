#include <iostream>
#include <conio.h>

using namespace std;

int main() {

int x;

int numeros[x];

cout<<"Ingrese la cantidad de numeros que quiere"<<endl;

cin>>x;

cout<<"Ingrese los numeros"<<endl;

for(int i=0; i<x; i++)
{
	
	cin>>numeros[i];
	
}

cout<<"El vector original es: "<<endl;

for(int i=0; i<x; i++)
{
	
    cout<<numeros[i]<<" ";	
	
}

cout<<endl;

cout<<"El vector al reves es: "<<endl;

for(int j=x-1; j>=0; j--)
{

    cout<<numeros[j]<<" "; 
	
}

}
