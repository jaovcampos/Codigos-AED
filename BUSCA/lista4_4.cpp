#include <iostream>
using namespace std;

int pesqbin(int val, int vet[], int tamanho);

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    int tamanhoDoVetor = sizeof(vetor) / sizeof(vetor[0]); 
    int valor = 30;
    int resultado = pesqbin(valor, vetor, tamanhoDoVetor);
    
    if (resultado != -1) {
        cout << "Valor " << valor << " encontrado na posição: " << resultado << "\n";
    } else {
        cout << "Valor " << valor << " não encontrado no vetor." << "\n";
    }

    return 0;
}

int pesqbin(int val, int vet[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vet[meio] == val) {
            return meio;
        }

        if (vet[meio] < val) {
            inicio = meio + 1;
        }
        else {
            fim = meio - 1;
        }
    }

    return -1;
}