#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool esPalindromo(const string& cadena) {
    string reversa = cadena;
    reverse(reversa.begin(), reversa.end());
    return cadena == reversa;
}

int main() {
    string cadena;
    cout<<"Escriba una frase"<<endl;
    getline(cin, cadena);

    if (esPalindromo(cadena)) {
    	
        cout<<"La palabra es un palindromo"<<endl;
        
    } else {
    	
        cout<<"La palabra no es un palindromo"<<endl;
        
    }

}
