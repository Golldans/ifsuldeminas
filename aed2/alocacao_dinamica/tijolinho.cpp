#include <iostream>
#include <stdlib.h>

#define MATRIX_RANGE 9

using namespace std;

void analisaEspacosVagos(int **matriz) {
    int soma_entre, valor_entre;
    
    for(int i = 0; i < MATRIX_RANGE - 1; i += 2) {
        for(int j = 0; j < i + 1; j++) {
            if (matriz[i][j] != 0) {
                soma_entre = matriz[i + 2][j] + matriz[i + 2][j + 2];
                valor_entre = (matriz[i][j] - soma_entre) / 2;
                
                matriz[i + 2][j + 1] = valor_entre;
                matriz[i + 1][j] = matriz[i + 2][j] + valor_entre;
                matriz[i + 1][j + 1] = matriz[i+ 2][j + 2] + valor_entre;
            }
        }
    }
    
    for(int i = 0; i < MATRIX_RANGE; i++) {
        for(int j = 0; MATRIX_RANGE; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    
    int quantidade, leitura, **matriz;
    
    cin >> quantidade;
    
    for (int k = 0; k < quantidade; k++) {
        matriz = (int **) malloc(MATRIX_RANGE * sizeof(int *));
        
        for(int i = 0; i < MATRIX_RANGE; i++)
            matriz[i] = (int *) calloc(MATRIX_RANGE, MATRIX_RANGE * sizeof(int));
            
        for(int i = 0; i < MATRIX_RANGE; i += 2) {
            for (int j = 0; j <= i + 1; j+= 2) {
                cin >> leitura;
                matriz[i][j] = leitura;
            }
        }
        analisaEspacosVagos(matriz);
        
    }
    
    
    return 0;
}
