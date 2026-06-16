// Faça um Programa que peça a temperatura em graus Celsius, transforme
// e mostre em graus Farenheit

#include <iostream>

using namespace std;

int main() {
    float celsius;
    
    cout << "Digite a temperatura em Celsius" << endl;
    cin >> celsius;

    float farenheit = (celsius * 9 / 5) + 32;

    cout << "Conversao para farenheit: " << farenheit << endl;

    return 0;
}