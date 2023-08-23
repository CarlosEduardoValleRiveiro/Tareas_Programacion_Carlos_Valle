#include <iostream>
#include<conio.h>

using namespace std;

int main() {
	
	string nombre[2];
	
	double nota[3];
	
	double Nsuma=0,promedio=0;

	for(int i=0;i<2;i++){
		
		cout<<"\nInfresa el nombre del estudiante No."<<i+1<<": ";
		
		cin>>nombre[i]; 
		
		Nsuma=0; 
		
		for(int j=0;j<3;j++){
			
		cout<<"\nIngrese la nota No."<<j+1<<": ";
		
		cin>>nota[j]; 
		
		Nsuma=Nsuma+nota[j];
			
		}

		promedio = Nsuma/3;
		
		cout<<"\nEl promedio es: "<<promedio;	
		
		if (promedio>=60){
			
		   cout<<"el estudiante aprobo"<<endl;
		   
		   cout<<nombre[i]<<"\t"<<nota[0]<<"\t"<<nota[1]<<"\t"<<nota[2]<<"Aprobado"<<"\n";
		   
		   Nsuma=0;

		}
    	else{
    		
    	   cout<<"el estudiante reprobo"<<endl;
    	   
    	   cout<<nombre[i]<<"\t"<<nota[0]<<"\t"<<nota[1]<<"\t"<<nota[2]<<"Reprobado"<<"\n";
    	   
    	   Nsuma=0;
    	   
		}
		
    }
    
    cout<<"\nResultados\n";
    
    cout<<"Nombre\tNota1\tNota2\tNota3\tSituación\n";
    
    for (int k=0;k<2;k++){
    	
    	cout<<nombre[k]<<"\t"<<nota[0]<<"\t"<<nota[1]<<"\t"<<nota[2]<<"\n";
    	
	}
    
	getch();

}
