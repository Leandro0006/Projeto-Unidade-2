// main.cpp
#include <iostream>
#include "Concessionaria.h"
#include "Automovel.h"
#include "Moto.h"
#include "Caminhao.h"
#include "Propriedade.h"

int main() {
    Propriedade proprietario("João", "Silva");
    Concessionaria concessionaria("Concessionária XYZ", "12.345.678/0001-90", proprietario);

    // Adicionando veículos
    Automovel* carro1 = new Automovel("Fusca", 30000, "ABC1234", "2022-01-01", "gasolina");
    Moto* moto1 = new Moto("Honda", 15000, "XYZ5678", "2022-02-01", "esportivo");
    Caminhao* caminhao1 = new Caminhao("Volvo", 80000, "LMN9101", "2022-03-01", "perigosa");

    concessionaria.adicionarVeiculo(carro1);
    concessionaria.adicionarVeiculo(moto1);
    concessionaria.adicionarVeiculo(caminhao1);

    // Buscar veículo
    concessionaria.buscarVeiculo("ABC1234");

    // Listar veículos
    std::cout << "Lista de Veículos:" << std::endl;
    concessionaria.listarVeiculos();

    // Aumentar preço
    concessionaria.aumentarPrecoVeiculos(10); // Aumenta 10%

    // Exportar estoque
    concessionaria.exportarEstoque();

    // Limpeza de memória
    delete carro1;
    delete moto1;
    delete caminhao1;

    return 0;
}
