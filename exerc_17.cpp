#include <iostream>

int main() {
    int tempo, tamanhoDoArquivo, velocidadeDownload;

    std::cout << "Digite o tamanho do arquivo: " << std::endl;
    std::cin >> tamanhoDoArquivo;

    std::cout << "Digite a velocidade da internet: " << std::endl;
    std::cin >> velocidadeDownload;
    
    tempo = (tamanhoDoArquivo * 8) / velocidadeDownload;
    
    std::cout << "O tempo de download em segundos: " << tempo << " segundos" << std::endl;

    return 0;
}