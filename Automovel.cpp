// Automovel.h
#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

#include "Veiculo.h"

class Automovel : public Veiculo {
private:
    std::string tipoMotor; // gasolina ou eletrico

public:
    Automovel(std::string m, double p, std::string c, std::string d, std::string tm)
        : Veiculo(m, p, c, d), tipoMotor(tm) {}

    void exibirAtributos() override {
        Veiculo::exibirAtributos();
        std::cout << "Tipo de Motor: " << tipoMotor << std::endl;
    }
};

#endif // AUTOMOVEL_H
