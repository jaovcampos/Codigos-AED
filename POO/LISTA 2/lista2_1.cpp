//Programação Orientada a Objetos (POO): 
//A Programação Orientada a Objetos organiza o código em torno de "objetos", que podem conter dados na forma de campos, 
//também conhecidos como atributos, e código na forma de procedimentos, também conhecidos como métodos. Esses objetos interagem 
//entre si através de mensagens. O objetivo principal da POO é facilitar a modelagem do mundo real em software.

//Classes:
//Uma classe é um modelo ou blueprint para criar objetos. Ela define os atributos e métodos que os objetos de 
//um tipo particular terão. Uma classe é como um plano de construção que define as características e comportamentos
//comuns a todos os objetos criados a partir dela.

//Instância:
//Uma instância é um objeto específico criado a partir de uma classe. É quando você efetivamente aloca memória 
//para armazenar os dados definidos na classe. Cada instância de uma classe pode ter seus próprios valores para 
//os atributos da classe.

//Objeto:
//Um objeto é uma instância de uma classe. Ele representa uma entidade do mundo real no contexto da programação. 
//Um objeto possui estados (atributos) e comportamentos (métodos) associados a ele.


//Exemplo "Class"

#include <iostream>
#include <string>
using namespace std;

class Carro {
public:
    string marca;
    string modelo;

    void exibir_info() {
        cout << "Nissan" << marca << ", Versa " << modelo << endl;
    }
};

//Exemplo instância 

int main() {
    
    Carro carro1;
    carro1.marca = "Nissa";
    carro1.modelo = "Versa";

    Carro carro2;
    carro2.marca = "Toyota";
    carro2.modelo = "Corolla";

    carro1.exibir_info(); 
    carro2.exibir_info(); 

    return 0;
}
//Criamos duas instâncias da classe "carro" chamadas "carro1" e "carro2".






