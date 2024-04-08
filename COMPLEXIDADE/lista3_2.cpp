#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
    string endereco;

public:
    Pessoa(string nome, int idade, string endereco) : nome(nome), idade(idade), endereco(endereco) {}

    string getNome() const {
        return nome;
    }

    void setNome(string nome) {
        this->nome = nome;
    }

    int getIdade() const {
        return idade;
    }

    void setIdade(int idade) {
        this->idade = idade;
    }

    string getEndereco() const {
        return endereco;
    }

    void setEndereco(string endereco) {
        this->endereco = endereco;
    }
};

class Empregado : public Pessoa {
private:
    double salarioBase;

public:
    Empregado(string nome, int idade, string endereco, double salarioBase)
        : Pessoa(nome, idade, endereco), salarioBase(salarioBase) {}

    virtual double calcularSalario() const {
        return salarioBase;
    }
};

class Vendedor : public Empregado {
private:
    double valorVendas;
    double comissao;

public:
    Vendedor(string nome, int idade, string endereco, double salarioBase, double comissao)
        : Empregado(nome, idade, endereco, salarioBase), valorVendas(0), comissao(comissao) {}


    void adicionarVendas(double valor) {
        valorVendas += valor;
    }

    double calcularSalario() const override {
        return Empregado::calcularSalario() + (valorVendas * (comissao / 100));
    }
};

int main() {
    Vendedor vendedor("Joao", 30, "Rua das Palmeiras", 1000, 10);

    vendedor.adicionarVendas(10000);

    cout << "Informacoes do Vendedor:" << endl;
    cout << "Nome: " << vendedor.getNome() << endl;
    cout << "Idade: " << vendedor.getIdade() << endl;
    cout << "Endereco: " << vendedor.getEndereco() << endl;
    cout << "Salario: " << vendedor.calcularSalario() << endl;

    return 0;
}
