//Padrão de Visibilidade:

//Struct: Por padrão, os membros de uma struct são públicos. Isso significa que todos os membros são acessíveis diretamente 
//de fora da estrutura.
//Class: Por padrão, os membros de uma class são privados. Isso significa que eles não podem ser acessados diretamente 
//de fora da classe.

//Herança:

//Struct: Não suporta herança direta ou herança de interface.
//Class: Suporta herança direta e herança de interface. Isso significa que uma classe pode herdar membros e métodos de 
//outra classe.

//Polimorfismo:

//Struct: Não suporta polimorfismo de forma direta.
//Class: Suporta polimorfismo, permitindo que uma classe derivada substitua (override) métodos da classe base.

//Uso Semântico:

//Struct: É frequentemente utilizada para representar estruturas de dados simples com pouca ou nenhuma lógica associada.
//Class: É usada para modelar objetos mais complexos que encapsulam tanto dados quanto funcionalidades.

//Encapsulamento:

//Struct: Geralmente não é usada para encapsular dados e funcionalidades, pois os membros são públicos por padrão.
//Class: É frequentemente usada para encapsular dados e funcionalidades, pois os membros são privados por padrão e 
//podem ser acessados por métodos públicos.

//Convenções de Uso:

//Struct: É frequentemente utilizada quando a estrutura de dados é simples e a ênfase está na eficiência e acessibilidade 
//direta dos membros.
//Class: É usada quando se deseja encapsular dados e funcionalidades, aplicando conceitos como herança, polimorfismo e 
//encapsulamento.

struct StructExemplo {
    int publicMember; // Membro público por padrão

private:
    int privateMember; // Membro privado
};

class ClassExemplo {
    int privateMember; // Membro privado por padrão

public:
    int publicMember; // Membro público

    void setPrivateMember(int value) {
        privateMember = value; // Método público para modificar membro privado
    }

    int getPrivateMember() {
        return privateMember; // Método público para acessar membro privado
    }
};
