#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    string telefone;
    string tipoSanguineo;
    int idade;

public:
    
    Pessoa(string _nome, string _telefone, string _tipoSanguineo, int _idade) : nome(_nome), telefone(_telefone), tipoSanguineo(_tipoSanguineo), idade(_idade) {
        
    }

    string getNome() const { return nome; }
    string getTelefone() const { return telefone; }
    string getTipoSanguineo() const { return tipoSanguineo; }
    int getIdade() const { return idade; }

    void setNome(string _nome) { nome = _nome; }
    void setTelefone(string _telefone) { telefone = _telefone; }
    void setTipoSanguineo(string _tipoSanguineo) { tipoSanguineo = _tipoSanguineo; }
    void setIdade(int _idade) { idade = _idade; }
};

class Hospital {
private:
    vector<Pessoa> pacientes;

public:
    void cadastrarPaciente(const Pessoa& paciente) {
        pacientes.push_back(paciente);
    }

    vector<Pessoa> listarDoadoresUniversais() const {
        vector<Pessoa> doadoresUniversais;

        for (const auto& paciente : pacientes) {
            if (paciente.getTipoSanguineo() == "O-") {
                doadoresUniversais.push_back(paciente);
            }
        }

        return doadoresUniversais;
    }
};

int main() {
    Hospital hospital;

    
    string nome, telefone, tipoSanguineo;
    int idade;

    cout << "Cadastro de Pacientes:" << "\n";
    cout << "Informe o nome do paciente: ";
    getline(cin, nome);
    cout << "Informe o telefone do paciente: ";
    getline(cin, telefone);
    cout << "Informe o tipo sanguíneo do paciente: ";
    getline(cin, tipoSanguineo);
    cout << "Informe a idade do paciente: ";
    cin >> idade;
    

    Pessoa novoPaciente(nome, telefone, tipoSanguineo, idade);
    hospital.cadastrarPaciente(novoPaciente);
    
    vector<Pessoa> doadoresUniversais = hospital.listarDoadoresUniversais();

    cout << "\nDoadores Universais:" << "\n";
    for (const auto& doador : doadoresUniversais) {
        cout << "Nome: " << doador.getNome() << ", Tipo Sanguíneo: " << doador.getTipoSanguineo() << "\n";
    }

    return 0;
}
