// Concessionaria.h
#ifndef CONCESSIONARIA_H
#define CONCESSIONARIA_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "Veiculo.h"
#include "Propriedade.h"

class Concessionaria {
private:
    std::string nome;
    std::string cnpj;
    Propriedade proprietario;
    std::vector<Veiculo*> veiculos;

public:
    Concessionaria(std::string n, std::string c, Propriedade p)
        : nome(n), cnpj(c), proprietario(p) {}

    void adicionarVeiculo(Veiculo* veiculo) {
        for (auto& v : veiculos) {
            if (v->getChassi() == veiculo->getChassi()) {
                std::cout << "Erro: Veículo já adicionado!" << std::endl;
                return;
            }
        }
        veiculos.push_back(veiculo);
    }

    void buscarVeiculo(std::string chassi) {
        for (auto& v : veiculos) {
            if (v->getChassi() == chassi) {
                v->exibirAtributos();
                return;
            }
        }
        std::cout << "Veículo não encontrado!" << std::endl;
    }

    void exportarEstoque() {
        std::ofstream arquivo("estoque.txt");
        for (auto& v : veiculos) {
            v->exibirAtributos();
            arquivo << v->getChassi() << std::endl; // Exemplo de exportação
        }
        arquivo.close();
    }

    void aumentarPrecoVeiculos(double percentual) {
        for (auto& v : veiculos) {
            v->aumentarPreco(percentual);
        }
    }

    void listarVeiculos() {
        for (auto& v : veiculos) {
            v->exibirAtributos();
        }
    }
};

#endif // CONCESSIONARIA_H
