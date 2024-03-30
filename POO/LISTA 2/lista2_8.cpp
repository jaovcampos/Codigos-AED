//Em C++, a herança é um conceito fundamental da programação orientada a objetos que permite que uma classe 
//(chamada de classe derivada ou subclasse) herde características (atributos e métodos) de outra classe 
//(chamada de classe base ou superclasse). A herança permite que você reutilize o código já existente e estabeleça
//uma relação entre as classes, representando uma "é uma" relação.

//Na herança, a classe derivada herda todos os membros (atributos e métodos) da classe base e pode adicionar novos 
//membros ou sobrescrever os membros existentes. Isso permite a criação de uma hierarquia de classes, onde classes 
//mais específicas (derivadas) herdam características de classes mais genéricas (base).

//A herança em C++ é implementada utilizando o conceito de classes derivadas, que são declaradas utilizando a sintaxe:

class ClasseDerivada : [modificador] ClasseBase {
    // Corpo da classe derivada
};

//Onde [modificador] pode ser public, protected ou private, determinando o nível de acesso dos membros herdados da 
//classe base na classe derivada.

//Exemplo:

#include <iostream>

// Classe base
class Animal {
public:
    void comer() {
        std::cout << "Animal está comendo" << std::endl;
    }
};

// Classe derivada (herda de Animal)
class Cachorro : public Animal {
public:
    void latir() {
        std::cout << "Cachorro está latindo" << std::endl;
    }
};

int main() {
    Cachorro cachorro;
    cachorro.comer(); // Saída: Animal está comendo
    cachorro.latir(); // Saída: Cachorro está latindo

    return 0;
}
