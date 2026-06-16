// 2- Faça um Programa que peça dois números inteiros e imprima a soma.

#include <iostream>
using namespace std;

int main () {
    int num1, num2, soma;
    
    cout << "digite um numero: ";
    cin >> num1;

    cout << "digite outro numero: ";
    cin >> num2;

    soma = num1 + num2;

    cout << "Resultado da soma dos numeros = " << soma << endl;
    return 0;
}
