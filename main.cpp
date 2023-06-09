#include "funcionario.h"
#include "gerente.h"
#include <iostream>

int main() {
    std::string nomeFuncionario;
    int idadeFuncionario;
    std::string nomeGerente;
    int idadeGerente;
    std::string setor;

    std::cout << "Digite o nome do funcionario: ";
    std::cin >> nomeFuncionario;

    std::cout << "Digite a idade do funcionario: ";
    std::cin >> idadeFuncionario;

    std::cout << "Digite o nome do gerente: ";
    std::cin >> nomeGerente;

    std::cout << "Digite a idade do gerente: ";
    std::cin >> idadeGerente;

    std::cout << "Digite o setor: ";
    std::cin >> setor;

    Gerente gerente(nomeGerente, idadeGerente, "Gerente de Software");
    Funcionario funcionario(nomeFuncionario, idadeFuncionario, &gerente, setor);

    std::cout << "\nOlah " << funcionario.getNome() << ". Seja muito bem vindo a LP Desenvolvimento. " << std::endl;
    std::cout << "Voce vai fazer parte do time do " << funcionario.getGestor()->getNome() << std::endl;
    std::cout << "Confira os dados do seu gestor: " << std::endl;
 
    std::cout << "\nInformacoes do Gerente:" << std::endl;
    gerente.exibirDados();

    std::cout << "\nInformacoes do Funcionario:" << std::endl;
    funcionario.exibirDados();

    

    return 0;
}
