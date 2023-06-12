#ifndef GERENTE_H
#define GERENTE_H

#include <string>

class Gerente {
public:
    Gerente(std::string nome, int idade, std::string setor);
    std::string getNome();
    std::string getSetor();
    void exibirDados();

private:
    std::string nome;
    int idade;
    std::string setor;
};

#endif
