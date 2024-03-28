#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dono {
private:
    string nome;
    string telefone;

public:
    Dono(string _nome, string _telefone) : nome(_nome), telefone(_telefone) {
        
    }

    string getNome() const { return nome; }
    string getTelefone() const { return telefone; }
};

class Carro {
private:
    string marca;
    string placa;
    string cor;
    Dono dono;

public:
    Carro(string _marca, string _placa, string _cor, const Dono& _dono)
        : marca(_marca), placa(_placa), cor(_cor), dono(_dono) {}

    void exibirDados() const {
        cout << "Marca: " << marca << "\n";
        cout << "Placa: " << placa << "\n";
        cout << "Cor: " << cor << "\n";
        cout << "Dono: " << dono.getNome() << "\n";
        cout << "Telefone do Dono: " << dono.getTelefone() << "\n";
    }
};

int main() {
    vector<Carro> carros;

    string nome, telefone, marca, placa, cor;

    cout << "Cadastro de Dono:" << "\n";
    cout << "Informe o nome do dono: ";
    getline(cin, nome);
    cout << "Informe o telefone do dono: ";
    getline(cin, telefone);

    Dono dono(nome, telefone);

    cout << "Cadastro de Carro:" << "\n";
    cout << "Informe a marca do carro: ";
    getline(cin, marca);
    cout << "Informe a placa do carro: ";
    getline(cin, placa);
    cout << "Informe a cor do carro: ";
    getline(cin, cor);

    Carro carro(marca, placa, cor, dono);

    carros.push_back(carro);

    cout << "\nDados do Carro Cadastrado:" << endl;
    for (const auto& carro : carros) {
        carro.exibirDados();
        cout << endl;
    }

    return 0;
}