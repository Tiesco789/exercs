// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float raio, area;
    float pi = 3.14;

    cout << "Digite o raio do circulo" << endl;
    cin >> raio;

    area = pi * pow(raio, 2);

    cout << "Resultado: " << area;

    return 0;
}