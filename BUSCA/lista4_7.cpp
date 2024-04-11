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
    cout << "Digite os elementos do vetor:" << "\n";
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    int menor = X[0];
    int posicaoMenor = 0;

    for (int i = 1; i < N; ++i) {
        if (X[i] < menor) {
            menor = X[i];
            posicaoMenor = i;
        }
    }

    cout << "O menor elemento é " << menor << " e está na posição " << posicaoMenor << "." << "\n";

    return 0;
}