/**
 * 15. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
 * 
 * Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados:
 * - 11% para o Imposto de Renda
 * - 8% para o INSS
 * - 5% para o sindicato
 * 
 * faça um programa que nos dê: 
 * - salário bruto
 * - quanto pagou ao INSS
 * - quanto pagou ao sindicato
 * - o salário líquido
 * 
 * calcule os descontos e o salário líquido, conforme a tabela abaixo:
 * 
----------------------
| Salário Bruto:   R$ 
| IR (11%):        R$ 
| INSS (8%):       R$ 
| Sindicato (5%): R$ 
----------------------
| Salário Liquido: R$ 
---------------------- 
Obs: Salário Líquido = Salário Bruto - Descontos
*/

#include <iostream>
#include <iomanip>

int main() {
    const double IMPOSTO_RENDA = 0.11;
    const double INSS = 0.08;
    const double SINDICATO = 0.05;
    
    double valorHora, horasTrabalhadas, salarioBruto;

    std::cout << "Digite quanto você ganha por hora: " << std::endl;
    std::cin >> valorHora;

    std::cout << "Digite quantas horas você trabalhou no mes: " << std::endl;
    std::cin >> horasTrabalhadas;

    salarioBruto = valorHora * horasTrabalhadas;

    double descontoIR = salarioBruto * IMPOSTO_RENDA;
    double descontoINSS = salarioBruto * INSS;
    double descontoSindicato = salarioBruto * SINDICATO;

    double salarioLiquido = salarioBruto - (descontoIR + descontoINSS + descontoSindicato);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "----------------------------\n";
    std::cout << "Salario Bruto:   R$ " << salarioBruto << '\n';
    std::cout << "IR (11%):        R$ " << descontoIR << '\n';
    std::cout << "INSS (8%):       R$ " << descontoINSS << '\n';
    std::cout << "Sindicato (5%):  R$ " << descontoSindicato << '\n';
    std::cout << "----------------------------\n";
    std::cout << "Salario Liquido: R$ " << salarioLiquido << '\n';
    std::cout << "----------------------------\n";

    return 0;
}