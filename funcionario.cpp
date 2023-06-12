#include "funcionario.h"
#include <iostream>

Funcionario::Funcionario(std::string nome, int idade, Gerente* gerente, std::string setor)
    : nome(nome), idade(idade), gerente(gerente), setor(setor) {
}

std::string Funcionario::getNome() {
    return nome;
}

Gerente* Funcionario::getGestor() {
    return gerente;
}

void Funcionario::exibirDados() {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Gestor: " << gerente->getNome() << std::endl;
    std::cout << "Setor: " << setor << std::endl;
}
