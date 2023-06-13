#include <iostream>

using namespace std;

int main() {
	
	int fila=3, columna=3;
	
	int matriz[fila][columna],matriz3[fila][columna] ;
	
	for (int i=0; i<fila; i++){
	for(int x=0; x<columna; x++){
		
		cout<<"ingrese el dato en "<<i<<","<<x<<endl;
		cin>>matriz [i][x];
		}
	}
	
	cout<<"La matriz es:"<<endl;
	
	for (int i=0; i<fila; i++){

   cout<<matriz[i][0]<<"   "<<matriz[i][1]<<"   "<<matriz[i][2]<<"   "<<endl;
      
   }
   
   	int matriz2[fila][columna];
	
	for (int i=0; i<fila; i++){
	for(int x=0; x<columna; x++){
		
		cout<<"ingrese el dato en "<<i<<","<<x<<endl;
		cin>>matriz2[i][x];
		}
	}
	
	cout<<"La matriz es:"<<endl;
	
	for (int i=0; i<fila; i++){

   cout<<matriz2[i][0]<<"   "<<matriz2[i][1]<<"   "<<matriz2[i][2]<<"   "<<endl;
      
   }

   cout<<"La matriz es:"<<endl;

   for (int i=0; i<fila; i++){


   matriz3[i][0]=matriz[i][0]+matriz2[i][0];
   matriz3[i][1]=matriz[i][1]+matriz2[i][1];
   matriz3[i][2]=matriz[i][2]+matriz2[i][2];
   
   cout<<matriz3[i][0]<<"   "<<matriz3[i][1]<<"   "<<matriz3[i][2]<<"   "<<endl; 
}
}


