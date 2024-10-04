#include <iostream>
#include <cstring>

using namespace std;


int achaEspaco(const char *leitura, char *copia, int tamanho) {
    int i = 0;
    for (i = 0; i < tamanho; i++) {
        if (leitura[i] == ' ' || leitura[i] == '\0') {
            break;
        }
        
        copia[i] = leitura[i];
    }
    
    copia[i] = '\0';
    
    return i;
}

int main() {
    string leitura = "socorram me subi no onibus em marrocos";
    char copia[200];
    
    cout << achaEspaco(leitura.c_str(), copia, leitura.size()) << endl;
    
    cout << copia << endl;

    return 0;
}
