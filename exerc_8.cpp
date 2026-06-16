// Faça um Programa que pergunte quanto você ganha por hora, o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <iostream>

using namespace std;

int main() {
    float valorHora, qtdHorasMes, calculo;

    cout << "Digite o valor da sua hora: " << endl;
    cin >> valorHora;

    cout << "Digite a quantidade de horas trabalhadas no mes: " << endl;
    cin >> qtdHorasMes;

    calculo = valorHora * qtdHorasMes;

    cout << "Resultado: " << calculo << endl;

    return 0;
}