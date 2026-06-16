// Faça um Programa que converta metros para centímetros.

#include <iostream>
using namespace std;

int main() {
    float metros, centimetros, formula;

    cout << "Digite a quantidade em metros para converter em centimetros: \n";
    cin >> centimetros;

    formula = (metros = 100) * centimetros;

    cout << "Conversao: " << formula << " centimetros";
 
    return 0;
}