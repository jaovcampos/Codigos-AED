#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno {
private:
    string nome;
    int matricula;
    int idade;
    int semestre;
    string curso;

public:
    
    Aluno(string nome, int matricula, int idade, int semestre, string curso) {
        this->nome = nome;
        this->matricula = matricula;
        this->idade = idade;
        this->semestre = semestre;
        this->curso = curso;
    }

    void exibirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Matrícula: " << matricula << endl;
        cout << "Idade: " << idade << endl;
        cout << "Semestre: " << semestre << endl;
        cout << "Curso: " << curso << endl;
    }
};

class Professor {
private:
    vector<Aluno> alunos;

public:

    void cadastrarAluno(string nome, int matricula, int idade, int semestre, string curso) {
        Aluno novoAluno(nome, matricula, idade, semestre, curso);
        alunos.push_back(novoAluno);
        cout << "Aluno cadastrado com sucesso!" << endl;
    }

    void exibirAlunos() {
        cout << "===== Alunos Cadastrados =====" << endl;
        for (int i = 0; i < alunos.size(); i++) {
            cout << "Aluno " << i + 1 << ":" << endl;
            alunos[i].exibirDados();
            cout << "-------------" << endl;
        }
    }
};

int main() {
    Professor professor;
    char opcao;

    do {
        cout << "Menu:" << endl;
        cout << "1. Cadastrar aluno" << endl;
        cout << "2. Exibir alunos cadastrados" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case '1': {
                string nome, curso;
                int matricula, idade, semestre;

                cout << "Digite o nome do aluno: ";
                cin.ignore();
                getline(cin, nome);
                cout << "Digite a matrícula do aluno: ";
                cin >> matricula;
                cout << "Digite a idade do aluno: ";
                cin >> idade;
                cout << "Digite o semestre do aluno: ";
                cin >> semestre;
                cout << "Digite o curso do aluno: ";
                cin.ignore();
                getline(cin, curso);

                professor.cadastrarAluno(nome, matricula, idade, semestre, curso);
                break;
            }
            case '2':
                professor.exibirAlunos();
                break;
            case '3':
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while(opcao != '3');

    return 0;
}
