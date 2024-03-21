#include <iostream>
#include <string>
using namespace std;

class Agenda {
private:
    string nome;
    string telefone;
public:
    void setNome(string nome) {
        this->nome = nome;
    }

    string getNome() {
        return nome;
    }

    void setTelefone(string telefone) {
        this->telefone = telefone;
    }

    string getTelefone() {
        return telefone;
    }

    void printAgenda() {
        cout << nome << "," << telefone << "\n";
    }
};

int main() {
    Agenda a;
    a.setNome("Ana");
    a.setTelefone("613738238");

    return 0;
}