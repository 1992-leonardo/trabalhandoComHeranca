#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include "gerente.h"

class Funcionario {
public:
    Funcionario(std::string nome, int idade, Gerente* gerente, std::string setor);
    std::string getNome();
    Gerente* getGestor();
    void exibirDados();

private:
    std::string nome;
    int idade;
    Gerente* gerente;
    std::string setor;
};

#endif
