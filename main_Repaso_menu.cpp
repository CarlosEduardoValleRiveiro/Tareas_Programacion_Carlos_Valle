#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {

int opc,x,notas[x],promedio,suma;

string nombre, apellido, clases[x];

while(opc<5)
{
cout<<"1: Ingresar el nombre"<<endl;
cout<<"2: Ingresar las notas"<<endl;
cout<<"3: Visualizacion de notas"<<endl;
cout<<"4: Promedio"<<endl;

cin>>(opc);

switch(opc)
{

case 1:
	{
		
		cout<<"ingrese el nombre y apellido"<<endl;
		
		cin>>nombre;
		
		cin>>apellido;
			
		break;		
	}
	
case 2:
	{
		
		cout<<"Ingrese el numero de clases"<<endl;
		
		cin>>x;
		
		cout<<"Ingrese en nombre de las clases"<<endl;
		
		for(int i=0; i<x; i++)
	
		{
		cin>>clases[i];
	    }
		
		cout<<"Ingrese las notas"<<endl;
		
		for(int i=0; i<x; i++)
		{
		cin>>notas[i];
	    }
	    
		break;
	}

case 3:
	{
		
		for(int i=0; i<x; i++)
		{
			
			cout<<clases[i]<<"   "<<notas[i]<<endl;
			
		}
		
		break;
	}

case 4:
	{
		for(int i=0; i<x; i++)
		{
			
			suma=notas[i]+suma;
			
		}
		
		promedio=suma/x;
		
		cout<<"EL promedio es: "<<promedio<<endl;
		
		break;
	}

}
}
}
