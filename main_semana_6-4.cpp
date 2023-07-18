#include <iostream>
#include <conio.h>

using namespace std;

int main() {

int x[5];
int suma;

cout<<"Ingrese 5 numeros"<<endl;

for(int i=0; i<5; i++)
{
	
cin>>x[i];	
	
}

cout<<"Los numeros son:"<<endl;

for(int i=0; i<5; i++)
{
	
cout<<x[i]<<endl;
	
}

for(int i=0; i<5; i++)
{
	
	suma=x[i]+suma;
	
}

int total=suma;

cout<<"La suma de todos los numeros es: "<<total<<endl;

getch();
}
