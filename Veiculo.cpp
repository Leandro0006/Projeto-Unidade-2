// Veiculo.h
#ifndef VEICULO_H
#define VEICULO_H

#include <string>
#include <iostream>

class Veiculo {
protected:
    std::string marca;
    double preco;
    std::string chassi;
    std::string dataFabricacao;

public:
    Veiculo(std::string m, double p, std::string c, std::string d)
        : marca(m), preco(p), chassi(c), dataFabricacao(d) {}

    virtual void exibirAtributos() {
        std::cout << "Marca: " << marca << ", Preço: " << preco
                  << ", Chassi: " << chassi << ", Data de Fabricação: " << dataFabricacao << std::endl;
    }

    std::string getChassi() const {
        return chassi;
    }

    double getPreco() const {
        return preco;
    }

    void aumentarPreco(double percentual) {
        preco += preco * (percentual / 100);
    }
};

#endif // VEICULO_H
