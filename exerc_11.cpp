// Faça um Programa que peça 2 números inteiros e um número real. 
// Calcule e mostre: 
    // 1. o produto do dobro do primeiro com metade do segundo. 
    // 2. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2;
    double num3;

    cout << "Digite um numero: " << endl;
    cin >> num1;

    cout << "Digite mais um numero: " << endl;
    cin >> num2;

    cout << "Digite outro numero: " << endl;
    cin >> num3;

    float calc1 = (num1 * 2) * (num2 / 2);
    float calc2 = (num1 * 3.0) + (pow(num3, 3.0));

    cout << "Calculo 1: " << calc1 << endl;
    cout << "Calculo 2: " << calc2 << endl;

    return 0;
}