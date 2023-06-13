#include <iostream>

using namespace std;

int main()
{
int fila=4, columna=4;

int matriz[fila][columna];

int sumfila[4],sumcolumna[4];

for (int i=0; i<fila; i++){
	for(int x=0; x<columna; x++){
		
		cout<<"ingrese el dato en "<<i<<","<<x<<endl;
		cin>>matriz [i][x];
		}
	}
	
for (int x=0; x<columna; x++){	
	
	sumfila[x]=matriz[0][x]+matriz[1][x]+matriz[2][x]+matriz[3][x];
	
	cout<<matriz[0][x]<<"   "<<matriz[1][x]<<"   "<<matriz[2][x]<<"   "<<matriz[3][x]<<"   "<<"   =   "<<sumfila[x]<<endl;
}

cout<<"=   =   =   ="<<endl;

for (int x=0; x<columna; x++){	
	
	sumfila[x]=matriz[x][0]+matriz[x][1]+matriz[x][2]+matriz[x][3];
	
	cout<<sumfila[x]<<"   ";
}

}
