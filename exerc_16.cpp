/**
 * Faça um Programa para uma loja de tintas.
 * O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
 * 
 * Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados 
 * e que a tinta é vendida em latas de 18 litros, que custam R$80,00 
 * ou em galões de 3,6 litros, que custam R$25,00.
 * 
 * Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:
 * - comprar apenas latas de 18 litros;
 * - comprar apenas galões de 3,6 litros;
 * - misturar latas e galões, de forma que o preço seja o menor.
 * 
 * Acrescente 10% de folga e sempre arredonde os valores para cima,
 * isto é, considere latas cheias.
 */

#include <iostream>

int main() {
    const double LITRO_LATA = 18;
    const double VALOR_LATA_DE_TINTA = 80;

    const double LITRO_GALAO = 3.6;
    const double VALOR_GALAO_DE_TINTA = 25;

    double areaTotal, comprimento, largura;
    
    std::cout << "Digite o comprimento da area a ser pintado: " << std::endl;
    std::cin >> comprimento;

    std::cout << "Digite a largura da area a ser pintado: " << std::endl;
    std::cin >> largura;

    areaTotal = comprimento * largura;
    double litrosNecessario = areaTotal / 6;

    double qtdLatas = litrosNecessario / LITRO_LATA;
    double valorFinalLatas = qtdLatas * VALOR_LATA_DE_TINTA;

    std::cout << "Quantidade de latas necessaria: " << qtdLatas << std::endl;
    std::cout << "Valor final: R$" << valorFinalLatas << std::endl;

    double qtdGaloes = litrosNecessario / LITRO_GALAO;
    double valorFinalGaloes = qtdGaloes * VALOR_GALAO_DE_TINTA;

    std::cout << "Quantidade de galoes necessarios: " << qtdGaloes << std::endl;
    std::cout << "Valor final: R$" << valorFinalGaloes << std::endl;

    return 0;
}