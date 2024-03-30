#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Dono {
private:
    string nome;
    string telefone;

public:

    Dono() {}

    Dono(const string& nome, const string& telefone) : nome(nome), telefone(telefone) {}

    void exibirDados() const {
        cout << "Nome: " << nome << endl;
        cout << "Telefone: " << telefone << endl;
    }

    string getNome() const { return nome; }
    void setNome(const string& nome) { this->nome = nome; }

    string getTelefone() const { return telefone; }
    void setTelefone(const string& telefone) { this->telefone = telefone; }
};


class Carro {
private:
    string marca;
    string placa;
    string cor;
    Dono dono;

public:

    Carro() {}

    Carro(const string& marca, const string& placa, const string& cor, const Dono& dono)
        : marca(marca), placa(placa), cor(cor), dono(dono) {}


    void exibirDados() const {
        cout << "Marca: " << marca << endl;
        cout << "Placa: " << placa << endl;
        cout << "Cor: " << cor << endl;
        dono.exibirDados();
        cout << endl;
    }


    string getMarca() const { return marca; }
    void setMarca(const string& marca) { this->marca = marca; }

    string getPlaca() const { return placa; }
    void setPlaca(const string& placa) { this->placa = placa; }

    string getCor() const { return cor; }
    void setCor(const string& cor) { this->cor = cor; }

    Dono getDono() const { return dono; }
    void setDono(const Dono& dono) { this->dono = dono; }
};

int main() {

    vector<Carro> carros;

    char continuar;
    do {
        string nome, telefone, marca, placa, cor;

        cout << "Cadastro de Dono:" << endl;
        cout << "Nome: ";
        cin >> nome;
        cout << "Telefone: ";
        cin >> telefone;

        Dono dono(nome, telefone);

        cout << "Cadastro de Carro:" << endl;
        cout << "Marca: ";
        cin >> marca;
        cout << "Placa: ";
        cin >> placa;
        cout << "Cor: ";
        cin >> cor;

        Carro carro(marca, placa, cor, dono);
        carros.push_back(carro);

        cout << "Deseja cadastrar outro carro? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    cout << "Carros Cadastrados:" << endl;
    for (const auto& carro : carros) {
        carro.exibirDados();
    }

    return 0;
}
