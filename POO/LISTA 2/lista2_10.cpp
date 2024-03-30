#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Aluno {
private:
    string nome;
    int matricula;
    int idade;
    int semestre;
    string curso;
    float nota;
    int faltas;

public:

    Aluno(string nome, int matricula, int idade, int semestre, string curso) {
        this->nome = nome;
        this->matricula = matricula;
        this->idade = idade;
        this->semestre = semestre;
        this->curso = curso;
        this->nota = 0;
        this->faltas = 0;
    }

    string getNome() const { return nome; }
    void setNome(const string& nome) { this->nome = nome; }

    int getMatricula() const { return matricula; }
    void setMatricula(int matricula) { this->matricula = matricula; }

    int getIdade() const { return idade; }
    void setIdade(int idade) { this->idade = idade; }

    int getSemestre() const { return semestre; }
    void setSemestre(int semestre) { this->semestre = semestre; }

    string getCurso() const { return curso; }
    void setCurso(const string& curso) { this->curso = curso; }

    float getNota() const { return nota; }
    void setNota(float nota) { this->nota = nota; }

    int getFaltas() const { return faltas; }
    void setFaltas(int faltas) { this->faltas = faltas; }

    void exibirDados() const {
        cout << "Nome: " << nome << endl;
        cout << "Matrícula: " << matricula << endl;
        cout << "Idade: " << idade << endl;
        cout << "Semestre: " << semestre << endl;
        cout << "Curso: " << curso << endl;
        cout << "Nota: " << nota << endl;
        cout << "Faltas: " << faltas << endl;
    }
};

class Professor {
private:
    vector<Aluno> alunos;

public:

    void cadastrarAluno(const string& nome, int matricula, int idade, int semestre, const string& curso) {
        Aluno novoAluno(nome, matricula, idade, semestre, curso);
        alunos.push_back(novoAluno);
        cout << "Aluno cadastrado com sucesso!" << endl;
    }

   
    void atribuirNota(int matricula, float nota) {
        for (auto& aluno : alunos) {
            if (aluno.getMatricula() == matricula) {
                aluno.setNota(nota);
                cout << "Nota atribuída com sucesso!" << endl;
                return;
            }
        }
        cout << "Aluno não encontrado!" << endl;
    }


    void atribuirFaltas(int matricula, int faltas) {
        for (auto& aluno : alunos) {
            if (aluno.getMatricula() == matricula) {
                aluno.setFaltas(faltas);
                cout << "Faltas atribuídas com sucesso!" << endl;
                return;
            }
        }
        cout << "Aluno não encontrado!" << endl;
    }

    float calcularMediaIdades() const {
        if (alunos.empty()) {
            return 0;
        }

        float somaIdades = 0;
        for (const auto& aluno : alunos) {
            somaIdades += aluno.getIdade();
        }
        return somaIdades / alunos.size();
    }

    void exibirResultados() const {
        cout << "Sala 1" << endl;
        cout << "Quantidade de Alunos: " << alunos.size() << endl;

        float somaNotas = 0;
        for (const auto& aluno : alunos) {
            somaNotas += aluno.getNota();
        }
        float mediaNotas = alunos.empty() ? 0 : somaNotas / alunos.size();
        cout << "Média das notas: " << mediaNotas << endl;

        int somaFaltas = 0;
        for (const auto& aluno : alunos) {
            somaFaltas += aluno.getFaltas();
        }
        float mediaFaltas = alunos.empty() ? 0 : static_cast<float>(somaFaltas) / alunos.size();
        cout << "Média das faltas: " << mediaFaltas << endl;

        cout << "Média das idades: " << calcularMediaIdades() << endl;
    }
};

int main() {
    Professor professor;

    char opcao;
    do {
        cout << "Menu:" << endl;
        cout << "1. Cadastrar aluno" << endl;
        cout << "2. Atribuir nota" << endl;
        cout << "3. Atribuir faltas" << endl;
        cout << "4. Exibir resultados" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case '1': {
                string nome, curso;
                int matricula, idade, semestre;

                cout << "Digite o nome do aluno: ";
                cin >> nome;
                cout << "Digite a matrícula do aluno: ";
                cin >> matricula;
                cout << "Digite a idade do aluno: ";
                cin >> idade;
                cout << "Digite o semestre do aluno: ";
                cin >> semestre;
                cout << "Digite o curso do aluno: ";
                cin >> curso;

                professor.cadastrarAluno(nome, matricula, idade, semestre, curso);
                break;
            }
            case '2': {
                int matricula;
                float nota;
                cout << "Digite a matrícula do aluno: ";
                cin >> matricula;
                cout << "Digite a nota do aluno: ";
                cin >> nota;
                professor.atribuirNota(matricula, nota);
                break;
            }
            case '3': {
                int matricula, faltas;
                cout << "Digite a matrícula do aluno: ";
                cin >> matricula;
                cout << "Digite a quantidade de faltas do aluno: ";
                cin >> faltas;
                professor.atribuirFaltas(matricula, faltas);
                break;
            }
            case '4':
                professor.exibirResultados();
                break;
            case '5':
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida!" << endl;
        }
    } while(opcao != '5');

    return 0;
}
