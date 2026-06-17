/**
 * Faça um programa para uma loja de tintas.
 * 
 * O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
 * 
 * a. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados 
 * e que a tinta é vendida em latas de 18 litros, que custam R$80,00.
 * 
 * b. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.
 */

 #include <iostream>

 int main () {
    const double LITRO_LATA = 18;
    const double VALOR_LATA_DE_TINTA = 80;

    double comprimento, largura, areaTotal, litrosNecessario, qtdLatas, valorFinal;

    std::cout << "Digite o comprimento da area a ser pintado: " << std::endl;
    std::cin >> comprimento;

    std::cout << "Digite a largura da area a ser pintado: " << std::endl;
    std::cin >> largura;

    areaTotal = comprimento * largura;
    std::cout << "Area total: " << areaTotal << std::endl;

    litrosNecessario = areaTotal / 3;

    qtdLatas = litrosNecessario / LITRO_LATA;
    valorFinal = qtdLatas * VALOR_LATA_DE_TINTA;

    std::cout << "Quantidade de latas necessaria: " << qtdLatas << std::endl;
    std::cout << "Valor final: R$" << valorFinal << std::endl;
    
    return 0;
 }