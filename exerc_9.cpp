// Faça um Programa que peça a temperatura em graus Farenheit, transforme
// e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).

#include <iostream>

using namespace std;

int main() {
    float farenheit;
    
    cout << "Digite a temperatura em Farenheit" << endl;
    cin >> farenheit;

    float celsius = (5 * (farenheit - 32) / 9);

    cout << "Conversao para celsius: " << celsius << endl;

    return 0;
}