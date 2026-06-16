/**
 * João Papo-de-Pescador, homem de bem, comprou um microcomputador 
 * para controlar o rendimento diário de seu trabalho.
 * 
 * a. Toda vez que ele traz um peso de peixes maior que o estabelecido
 * pelo regulamento de pesca do estado de São Paulo (50 quilos) deve
 * pagar uma multa de R$ 4,00 por quilo excedente.
 * 
 * b. João precisa que você faça um programa que leia a variável 'peso'
 * (peso de peixes) e calcule o excesso.
 * 
 * c. Gravar na variável 'excesso' a quantidade de quilos além do limite e na
 * variável 'multa' o valor da multa que João deverá pagar. Imprima os
 * dados do programa com as mensagens adequadas.
 */

 #include <iostream>
 #include <string>

 int main() {
     
    const double LIMITE_PESO = 50.f;
    const double MULTA_POR_KG = 4.f;
    
    double peso; 
    double excesso = 0.0; 
    double multa = 0.0; 

    std::cout << "Digite o peso de peixes (KG):" << std::endl;
    std::cin >> peso;

    if (peso > LIMITE_PESO) {
        excesso = peso - LIMITE_PESO;
        multa = excesso * MULTA_POR_KG;
    }

    std::cout << "\nPeso informado: " << peso << " kg\n";
    std::cout << "Excesso: " << excesso << " kg\n";
    std::cout << "Multas: R$ " << multa << '\n';
    
    return 0;
 }