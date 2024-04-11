#include <iostream>
using namespace std;

int pesqseq(int val, int vet[], int tamanho);

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanhoDoVetor = sizeof(vetor) / sizeof(vetor[0]);
    int valor = 30;

    int resultado = pesqseq(valor, vetor, tamanhoDoVetor);
    if (resultado != -1) {
        cout << "Valor " << valor << " encontrado na posição: " << resultado << "\n";
    } else {
        cout << "Valor " << valor << " não encontrado no vetor." << "\n";
    }

    return 0;
}

int pesqseq(int val, int vet[], int tamanho) {
    for (int indice = 0; indice < tamanho; indice++) {
        if (vet[indice] == val) {
            return indice;
        }
    }
    return -1;
}