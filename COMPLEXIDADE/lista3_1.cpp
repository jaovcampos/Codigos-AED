#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Veiculo {
private:
    string marca;
    string cor;
    int ano;
    double peso;

public:

    Veiculo(string marca, string cor, int ano, double peso) {
        this->marca = marca;
        this->cor = cor;
        this->ano = ano;
        this->peso = peso;
    }

    void setMarca(string marca) {
        this->marca = marca;
    }

    string getMarca() const {
        return marca;
    }

    void setCor(string cor) {
        this->cor = cor;
    }

    string getCor() const {
        return cor;
    }

    void setAno(int ano) {
        this->ano = ano;
    }

    int getAno() const {
        return ano;
    }

    void setPeso(double peso) {
        this->peso = peso;
    }

    double getPeso() const {
        return peso;
    }
};

class Concessionaria {
private:
    vector<Veiculo> veiculos;

public:

    void adicionarVeiculo(Veiculo veiculo) {
        veiculos.push_back(veiculo);
    }

    void imprimirVeiculos() const {
        for (const Veiculo& veiculo : veiculos) {
            cout << "Marca: " << veiculo.getMarca() << ", ";
            cout << "Cor: " << veiculo.getCor() << ", ";
            cout << "Ano: " << veiculo.getAno() << ", ";
            cout << "Peso: " << veiculo.getPeso() << endl;
        }
    }

    void imprimirVeiculosEmArquivo(string nomeArquivo) const {
        ofstream arquivo(nomeArquivo);
        if (arquivo.is_open()) {
            for (const Veiculo& veiculo : veiculos) {
                arquivo << "Marca: " << veiculo.getMarca() << ", ";
                arquivo << "Cor: " << veiculo.getCor() << ", ";
                arquivo << "Ano: " << veiculo.getAno() << ", ";
                arquivo << "Peso: " << veiculo.getPeso() << endl;
            }
            arquivo.close();
            cout << "Veículos salvos em " << nomeArquivo << " com sucesso!" << endl;
        } else {
            cout << "Não foi possível abrir o arquivo para escrita." << endl;
        }
    }
};

int main() {

    Concessionaria concessionaria;

    concessionaria.adicionarVeiculo(Veiculo("BYD", "Preto", 2022, 1500.5));
    concessionaria.adicionarVeiculo(Veiculo("Chevrolet", "Prata", 2020, 1400.2));
    concessionaria.adicionarVeiculo(Veiculo("Volkswagen", "Azul", 2023, 1600.8));

    cout << "Veículos cadastrados:" << endl;
    concessionaria.imprimirVeiculos();

    concessionaria.imprimirVeiculosEmArquivo("veiculos.txt");

    return 0;
}

