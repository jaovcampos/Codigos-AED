#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Aluno {

private:
    string nome;
    int matricula;
    string curso;
    float nota;
    int faltas;

public:
    Aluno(string _nome, int _matricula, string _curso) : nome(_nome), matricula(_matricula), curso(_curso), nota(0), faltas(0) {}

    void exibirDados() const {
        cout << "Nome: " << nome << "\n";
        cout << "Matricula: " << matricula << "\n";
        cout << "Curso: " << curso << "\n";
        cout << "Nota: " << nota << "\n";
        cout << "Faltas: " << faltas << "\n";
    }

    string getNome() const { return nome; }
    int getMatricula() const { return matricula; }
    string getCurso() const { return curso; }

   
    void atribuirNota(float _nota) {
        nota = _nota;
    }

    void atribuirFaltas(int _faltas) {
        faltas = _faltas;
    }
};

class GerenciadorAlunos {

private:
    vector<Aluno> alunos;

public:
    void cadastrarAluno(const Aluno& aluno) {
        alunos.push_back(aluno);
    }

    void cadastrarNovoAluno() {
        string nome, curso;
        int matricula;
        float nota;
        int faltas;

        cout << "Informe o nome do aluno: ";
        getline(cin, nome);

        cout << "Informe a matricula do aluno: ";
        cin >> matricula;
        cin.ignore();

        cout << "Informe o curso do aluno: ";
        getline(cin, curso);

        Aluno novoAluno(nome, matricula, curso);
        cout << "Informe a nota do aluno: ";
        cin >> nota;
        novoAluno.atribuirNota(nota);

        cout << "Informe a quantidade de faltas do aluno: ";
        cin >> faltas;
        novoAluno.atribuirFaltas(faltas);

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

