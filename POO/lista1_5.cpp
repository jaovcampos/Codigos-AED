#include <iostream>
#include <cmath>

using namespace std;

class CalculadoraCirculoeCubo {
private:
    double raioCirculo;
    double ladoCubo;

    
    double calcularComprimentoCircunferencia() const {
        return 2 * M_PI * raioCirculo;
    }

    double calcularAreaCirculo() const {
        return M_PI * raioCirculo * raioCirculo;
    }

    double calcularAreaLateralCubo() const {
        return 4 * ladoCubo * ladoCubo;
    }

    double calcularAreaTotalCubo() const {
        return 6 * ladoCubo * ladoCubo;
    }

    double calcularVolumeCubo() const {
        return ladoCubo * ladoCubo * ladoCubo;
    }

public:

    void definirDimensoesCirculo(double raio) {
        raioCirculo = raio;
    }

    void definirDimensoesCubo(double lado) {
        ladoCubo = lado;
    }

    void imprimirCalculos() const {
        cout << "Circulo:" << "\n";
        cout << "Raio: " << raioCirculo << "\n";
        cout << "Comprimento da circunferencia: " << calcularComprimentoCircunferencia() << "\n";
        cout << "Area da circunferencia: " << calcularAreaCirculo() << "\n";

        cout << "\nCubo:" << "\n";
        cout << "Lado: " << ladoCubo << "\n";
        cout << "Area lateral do cubo: " << calcularAreaLateralCubo() << "\n";
        cout << "Area total do cubo: " << calcularAreaTotalCubo() << "\n";
        cout << "Volume do cubo: " << calcularVolumeCubo() << "\n";
    }
};

int main() {
    CalculadoraCirculoeCubo calculadora;

    double raio;
    double lado;

    cout << "Informe o raio do círculo: ";
    cin >> raio;

    cout << "Informe o lado do cubo: ";
    cin >> lado;

    calculadora.definirDimensoesCirculo(raio);
    calculadora.definirDimensoesCubo(lado);
    calculadora.imprimirCalculos();

    return 0;
}
