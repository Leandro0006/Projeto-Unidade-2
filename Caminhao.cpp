// Caminhao.h
#ifndef CAMINHAO_H
#define CAMINHAO_H

#include "Veiculo.h"

class Caminhao : public Veiculo {
private:
    std::string tipoCarga; // comum ou perigosa

public:
    Caminhao(std::string m, double p, std::string c, std::string d, std::string tc)
        : Veiculo(m, p, c, d), tipoCarga(tc) {}

    void exibirAtributos() override {
        Veiculo::exibirAtributos();
        std::cout << "Tipo de Carga: " << tipoCarga << std::endl;
    }
};

#endif // CAMINHAO_H
