#include <bits/stdc++.h>

using namespace std;

int partition(int *vetor, int low, int high) {
    int pivo = vetor[high];
    
    int index = (low - 1);
    
    for (int i = low; i <= high - 1; i++) {
        if (vetor[i] <= pivo) {
            index++;
            swap(vetor[index], vetor[i]);
        }
    }
    
    swap(vetor[index + 1], vetor[high]);
    
    return (index + 1);
}

void quickSort(int *vetor, int low, int high) {
    if (low < high) {
        int part = partition(vetor, low, high);
        
        quickSort(vetor, low, part - 1);
        quickSort(vetor, part + 1, high);
    }
}

int main()
{
    int repeticoes, tamanhoArray, leitura;
    int *valores;
    
    cin >> repeticoes;
    
    for (int i = 0; i < repeticoes; i++) {
        cin >> tamanhoArray;
        
        valores = (int *) malloc(tamanhoArray * sizeof(int));
        
        for (int j = 0; j <tamanhoArray; j++) {
            cin >> leitura;
            valores[j] = leitura;
        }
        
        quickSort(valores, 0, tamanhoArray - 1);
        
        for (int j = 0; j < tamanhoArray; j++) {
            cout << valores[j] << " ";
        }
    }
    return 0;
}
