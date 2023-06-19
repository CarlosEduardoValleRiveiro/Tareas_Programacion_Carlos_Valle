#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	
	
	char nombre1[10],nombre2[10],nombre3[10],nombre4[10],nombre5[10];
	
	cout<<"Escriba 5 nombres con un maximo de 30 caracteres"<<endl;
		
	cin.getline(nombre1,10,'/n');
	
	cin.getline(nombre2,10,'/n');
		
	cin.getline(nombre3,10,'/n');
			
	cin.getline(nombre4,10,'/n');
	
	cin.getline(nombre5,10,'/n');	
	
	int longitud1=strlen(nombre1);
	int longitud2=strlen(nombre2);
	int longitud3=strlen(nombre3);
	int longitud4=strlen(nombre4);
	int longitud5=strlen(nombre5);
		
	cout<<nombre1<<endl;
	
	cout<<"cantidad de espacios: "<<longitud1<<endl;
	
	cout<<nombre2<<endl;
	
	cout<<"cantidad de espacios: "<<longitud2<<endl;
	
	cout<<nombre3<<endl;
	
	cout<<"cantidad de espacios: "<<longitud3<<endl;
	
	cout<<nombre4<<endl;
	
	cout<<"cantidad de espacios: "<<longitud4<<endl;
	
	cout<<nombre5<<endl;
	
	cout<<"cantidad de espacios: "<<longitud5<<endl;
		
}
