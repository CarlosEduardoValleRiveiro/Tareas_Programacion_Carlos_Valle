#include <iostream>

const int FILAS = 5;
const int COLUMNAS = 5;

int main() {
    int matriz[FILAS][COLUMNAS];

    // Llenar la matriz
    std::cout << "Ingrese los elementos de la matriz:" << std::endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            std::cin >> matriz[i][j];
        }
    }

    // Calcular la suma de cada fila
    int sumaMaxima = 0;
    int filaMaxima = -1;
    for (int i = 0; i < FILAS; i++) {
        int sumaFila = 0;
        for (int j = 0; j < COLUMNAS; j++) {
            sumaFila += matriz[i][j];
        }
        if (sumaFila > sumaMaxima) {
            sumaMaxima = sumaFila;
            filaMaxima = i;
        }
    }

    // Imprimir el resultado
    std::cout << "La fila con la máxima suma es la fila " << filaMaxima + 1
              << " con una suma de " << sumaMaxima << std::endl;

    return 0;
}

