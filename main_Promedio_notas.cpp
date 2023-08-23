#include <iostream>

using namespace std;

int x, suma, promedio;

int main() {

int vector[x];

cout<<"Ingrese cuantas notas tiene"<<endl;

cin>>x;

cout<<"Ingrese la nota da cada una de sus clases"<<endl;
	
for(int i=0; i<x; i++)
{
		
	cin>>vector[i];
	
	suma=vector[i]+suma;
}

promedio=suma/x;

cout<<"El promedio es:"<<promedio<<endl;

if(promedio>=61)
{
	cout<<"Aprobado"<<endl;
}
else
{
	cout<<"Reprobado"<<endl;
}
}
