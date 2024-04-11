#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Digite o tamanho do vetor: ";
    cin >> N;

    if (N <= 0) {
        cout << "O tamanho do vetor deve ser positivo." << "\n";
        return 1;
    }

    vector<int> X(N);
    cout << "Digite os elementos do vetor:" <<"\n";
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    int maior = X[0];
    int posicaoMaior = 0;

    for (int i = 1; i < N; ++i) {
        if (X[i] > maior) {
            maior = X[i];
            posicaoMaior = i;
        }
    }

    cout << "O maior elemento é " << maior << " e está na posição " << posicaoMaior << "." << "\n";

    return 0;
}