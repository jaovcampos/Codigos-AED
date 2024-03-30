#include <iostream>
#include <cmath>

using namespace std;

class CalculadoraMatematica {
public:

    static double calcularDiametroCircunferencia(double raio) {
        return 2 * raio;
    }

    static double calcularAreaCircunferencia(double raio) {
        return M_PI * raio * raio;
    }

    static double calcularAreaLateralCubo(double lado) {
        return 4 * lado * lado;
    }

    static double calcularAreaTotalCubo(double lado) {
        return 6 * lado * lado;
    }

    static double calcularVolumeCubo(double lado) {
        return lado * lado * lado;
    }
};

int main() {
    double raio, lado;

    cout << "Informe o raio da circunferencia: ";
    cin >> raio;

    cout << "Diâmetro da circunferencia: " << CalculadoraMatematica::calcularDiametroCircunferencia(raio) << endl;
    cout << "Area da circunferencia: " << CalculadoraMatematica::calcularAreaCircunferencia(raio) << endl;

    cout << "Informe o lado do cubo: ";
    cin >> lado;

    cout << "Area lateral do cubo: " << CalculadoraMatematica::calcularAreaLateralCubo(lado) << endl;
    cout << "Area total do cubo: " << CalculadoraMatematica::calcularAreaTotalCubo(lado) << endl;
    cout << "Volume do cubo: " << CalculadoraMatematica::calcularVolumeCubo(lado) << endl;

    return 0;
}
