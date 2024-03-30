#include <iostream>
#include <string>

using namespace std;

class Contato {
private:
    string nome;
    string telefone;
    string endereco;
    string cep;

public:

    string getNome() const { return nome; }
    void setNome(const string& nome) { this->nome = nome; }

    string getTelefone() const { return telefone; }
    void setTelefone(const string& telefone) { this->telefone = telefone; }

    string getEndereco() const { return endereco; }
    void setEndereco(const string& endereco) { this->endereco = endereco; }

    string getCep() const { return cep; }
    void setCep(const string& cep) { this->cep = cep; }

    void imprimirDados() const {
        cout << "Nome: " << nome << endl;
        cout << "Telefone: " << telefone << endl;
        cout << "Endereço: " << endereco << endl;
        cout << "CEP: " << cep << endl;
        cout << endl;
    }
};

int main() {
    Contato contatos[4]; 

    for (int i = 0; i < 4; ++i) {
        string nome, telefone, endereco, cep;

        cout << "Cadastro do Contato " << i+1 << ":" << endl;
        cout << "Nome: ";
        getline(cin, nome);
        contatos[i].setNome(nome);

        cout << "Telefone: ";
        getline(cin, telefone);
        contatos[i].setTelefone(telefone);

        cout << "Endereço: ";
        getline(cin, endereco);
        contatos[i].setEndereco(endereco);

        cout << "CEP: ";
        getline(cin, cep);
        contatos[i].setCep(cep);

        cout << endl;
    }

    for (int i = 0; i < 4; ++i) {
        cout << "Contato " << i+1 << ":" << endl;
        contatos[i].imprimirDados();
    }

    return 0;
}
