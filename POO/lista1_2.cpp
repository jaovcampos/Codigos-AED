#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Aluno {

private:
    
    string nome;
    int matricula;
    string curso;

public:
    
    Aluno(string _nome, int _matricula, string _curso) : nome(_nome), matricula(_matricula), curso(_curso) {
        
    }

    void exibirDados() const {
        cout << "Nome: " << nome << "\n";
        cout << "Matricula: " << matricula << "\n";
        cout << "Curso: " << curso << "\n";
    }

    string getNome() const { return nome; }
    int getMatricula() const { return matricula; }
    string getCurso() const { return curso; }
};

class GerenciadorAlunos {
    
private:
    vector<Aluno> alunos;

public:
    void cadastrarAluno(const Aluno& aluno) {
        
    }

    void cadastrarNovoAluno() {
        string nome, curso;
        int matricula;

        cout << "Informe o nome do aluno: ";
        getline(cin, nome);

        cout << "Informe a matricula do aluno: ";
        cin >> matricula;

        cout << "Informe o curso do aluno: ";
        getline(cin, curso);

        Aluno novoAluno(nome, matricula, curso);
        cadastrarAluno(novoAluno);
    }

    void listarAlunos() const {
        cout << "Lista de Alunos:" << "\n";
        for (const auto& aluno : alunos) {
            aluno.exibirDados();
            cout << "\n";
        }
    }
};

int main() {
    GerenciadorAlunos gerenciador;

    gerenciador.cadastrarNovoAluno();
    gerenciador.cadastrarNovoAluno();
    gerenciador.listarAlunos();

    return 0;
}

