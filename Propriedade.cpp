// Propriedade.h
#ifndef PROPRIEDADE_H
#define PROPRIEDADE_H

#include <string>

class Propriedade {
private:
    std::string primeiroNome;
    std::string segundoNome;

public:
    Propriedade(std::string pn, std::string sn) : primeiroNome(pn), segundoNome(sn) {}

    std::string getNomeCompleto() const {
        return primeiroNome + " " + segundoNome;
    }
};

#endif // PROPRIEDADE_H
