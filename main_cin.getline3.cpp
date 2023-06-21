#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main() {
	
	char frase[35];
	
	int a=0, e=0, i=0, o=0, u=0, vocales;
	
	cout<<"Escriba una frase"<<endl;
	
	cin.getline(frase,35,'\n');
	
	for(int x=0; x<35; x++)
	{
	
	switch (frase[x])
	{
		
	case 'a': vocales++; break;
	case 'e': vocales++; break;
	case 'i': vocales++; break;
	case 'o': vocales++; break;
	case 'u': vocales++; break;	
		
	}
	
    }
    cout<<"el numero de vocales es: "<<vocales<<endl;
	
}
