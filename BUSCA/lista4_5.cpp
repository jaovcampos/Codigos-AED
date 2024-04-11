#include <iostream>
using namespace std;

int pesqsent(int val, int vet[], int tamanho) {
    int ultimo = vet[tamanho - 1];
    vet[tamanho - 1] = val;
    int indice = 0;

    while (vet[indice] != val) {
        indice++;
    }

    vet[tamanho - 1] = ultimo;

    if (indice < tamanho - 1 || vet[tamanho - 1] == val) {
        return indice;
    } else {
        return -1;
    }
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50, -1};
    int tamanhoDoVetor = sizeof(vetor) / sizeof(vetor[0]);
    int valor = 30;

    int resultado = pesqsent(valor, vetor, tamanhoDoVetor);
    if (resultado != -1) {
        cout << "Valor " << valor << " encontrado na posição: " << resultado << "\n";
    } else {
        cout << "Valor " << valor << " não encontrado no vetor." <<  "\n";
    }

    return 0;
}