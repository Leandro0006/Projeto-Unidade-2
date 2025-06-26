// Moto.h
#ifndef MOTO_H
#define MOTO_H

#include "Veiculo.h"

class Moto : public Veiculo {
private:
    std::string modelo; // classico ou esportivo

public:
    Moto(std::string m, double p, std::string c, std::string d, std::string mod)
        : Veiculo(m, p, c, d), modelo(mod) {}

    void exibirAtributos() override {
        Veiculo::exibirAtributos();
        std::cout << "Modelo: " << modelo << std::endl;
    }
};

#endif // MOTO_H
