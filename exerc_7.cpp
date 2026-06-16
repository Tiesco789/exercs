// Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float lado, area;

    cout << "Digite area do quadro: " << endl;
    cin >> lado;

    area = pow(lado, 2);

    cout << "Resultado: " << area << endl;

    return 0;
}