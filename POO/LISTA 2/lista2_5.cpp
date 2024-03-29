//Herança:

//Definição: Herança é um mecanismo que permite que uma classe (conhecida como classe derivada ou subclasse) herde os 
//atributos e métodos de outra classe (conhecida como classe base ou superclasse). A classe derivada pode estender ou 
//especializar a funcionalidade da classe base, adicionando novos membros ou sobrescrevendo os membros existentes.

//Propósito: A herança é utilizada para promover a reutilização de código e estabelecer uma relação de "é um" entre 
//classes. Por exemplo, se você tem classes Animal e Cachorro, pode fazer com que a classe Cachorro herde da classe 
//Animal, já que um cachorro é um tipo de animal.

//Exemplos

#include <iostream>

class Animal {
public:
    void fazerSom() {
        std::cout << "Som genérico de um animal" << std::endl;
    }
};

class Cachorro : public Animal {
public:
    void fazerSom() {
        std::cout << "Au au" << std::endl;
    }
};

int main() {
    Animal animal;
    animal.fazerSom();  // Saída: Som genérico de um animal

    Cachorro cachorro;
    cachorro.fazerSom();  // Saída: Au au

    return 0;
}

//Polimorfismo:

//Definição: Polimorfismo é a capacidade de um objeto de uma classe se comportar de maneira diferente dependendo do 
//contexto. Isso pode ocorrer através da sobrecarga de métodos (polimorfismo de sobrecarga) ou da sobrescrita de métodos
//(polimorfismo de sobreposição).
//Propósito: O polimorfismo permite que o código seja mais flexível e genérico, já que diferentes objetos podem responder
//de maneira adequada a uma mesma mensagem, independentemente de sua classe específica. 

//Exemplo

#include <iostream>

class Animal {
public:
    virtual void fazerSom() {
        std::cout << "Som genérico de um animal" << std::endl;
    }
};

class Cachorro : public Animal {
public:
    void fazerSom() override {
        std::cout << "Au au" << std::endl;
    }
};

class Gato : public Animal {
public:
    void fazerSom() override {
        std::cout << "Miau" << std::endl;
    }
};

void emitirSom(Animal* animal) {
    animal->fazerSom();
}

int main() {
    Animal animal;
    emitirSom(&animal);  // Saída: Som genérico de um animal

    Cachorro cachorro;
    emitirSom(&cachorro);  // Saída: Au au

    Gato gato;
    emitirSom(&gato);  // Saída: Miau

    return 0;
}

