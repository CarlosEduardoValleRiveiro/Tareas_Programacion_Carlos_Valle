#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros;

    cout <<"Ingrese 15 numeros:"<<endl;
    for (int i = 0; i < 15; i++) {
        int numero;
        cin >> numero;
        numeros.push_back(numero);
    }

    sort(numeros.begin(), numeros.end(), std::greater<int>());

    cout << "Vector ordenado de mayor a menor:" <<endl;
    for (vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }
    cout << std::endl;

    sort(numeros.begin(), numeros.end());

    cout << "Vector ordenado de menor a mayor:" <<endl;
    for (vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << " ";
    }
    cout << std::endl;

    return 0;
}


