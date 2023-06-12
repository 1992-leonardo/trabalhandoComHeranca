#include "gerente.h"
#include <iostream>

Gerente::Gerente(std::string nome, int idade, std::string setor)
    : nome(nome), idade(idade), setor(setor) {
}

std::string Gerente::getNome() {
    return nome;
}

std::string Gerente::getSetor() {
    return setor;
}

void Gerente::exibirDados() {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Setor: " << setor << std::endl;
}
