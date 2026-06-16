/**
 * Tendo como dados de entrada a altura de uma pessoa, construa um
 * algoritmo que calcule seu peso ideal, usando a seguinte fórmula:
 * (72.7*altura) - 58
 */

#include <iostream>
#include <cmath>
#include <clocale>

int main() {
    setlocale(LC_ALL, ".UTF-8");
    double altura, peso;

    std::cout << "Digite a sua altura (ex: 1.76): \n";
    std::cin >> altura;

    peso = (72.7 * altura) - 58;

    std::cout << "O peso ideal para a sua altura é: " << peso << "kg";
    return 0;
}