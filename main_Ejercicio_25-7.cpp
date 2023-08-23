#include <iostream>

using namespace std;

int main() {

int edades[10], aux;

cout<<"Ingrese 10 edades"<<endl;

for(int s=0; s<10; s++){
	
	cin>>edades[s];
}

for(int i=1; i<10; i++){
	
	for(int j=0; j<9; j++){
		
		if(edades[j]>edades[i]){
		
		aux=edades[j];
		
		edades[j]=edades[i];
		
		edades[i]=aux;
		
	}
		
	}
	
}

for(int k=0; k<10; k++){
	
	cout<<edades[k]<<"  ";
	
}

}
