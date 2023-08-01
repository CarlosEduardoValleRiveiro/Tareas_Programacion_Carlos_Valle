#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	//Variables
	
	int x,y,promedio,suma;
	
	//Almacenamiento de variables
	
	cout<<"Ingrese el numero de estudiantes"<<endl;
	
	cin>>x;
	
	cout<<"ingrese la cantidad de cursos"<<endl;
	
	cin>>y;
	
		//Vectores
	
	string nombres[x];
	
	double notas[y];
	
	//Ciclos para almacenar los nombres y notas
	
	for(int i=0; i<x; i++)
	{
		cout<<"Ingrese el nombre del estudiante numero "<<i+1<<endl;
		
		cin>>nombres[i];
		
		suma=0;
		
		for(int j=0; j<y; j++)
		{
			
			cout<<"Ingrese las notas de "<<nombres[i]<<endl;
			
			cin>>notas[j];
			
			suma=notas[j]+suma;
		}
		
		cout<<"Resultados"<<endl;
		
		cout<<"Nombre";
		
		for(int k=0; k<y; k++)
		{
		cout<<"\tnota"<<k+1;
		}
		
		cout<<"\tpromedio\tAprobado o reprobado"<<endl;
		
		cout<<nombres[i];
		
		for(int h=0; h<y; h++)
		{
			
			cout<<"\t"<<notas[h];
			
		}
	 
	 promedio=0;
	 
	 promedio=suma/y;
	 
	 if(promedio>=60)
	 {
	 	
	 cout<<"\t"<<promedio<<"\t\tAprobado";
	 
	 }
	 else
	 {
	 	
	 cout<<"\t"<<promedio<<"\t\tReprobado";
	 
	 }
	 cout<<endl;
	 
	 cout<<endl;
	 
	}
}
