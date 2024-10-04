#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;


int achaEspaco(char *leitura, char *copia, int tamanho) {
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
    char copia[30], leitura[30], lastChar;
    int index = 0;

    while (lastChar != '\r' && index < 30) {
        lastChar = getch();
        leitura[index] = lastChar;
        index++;
    }

    achaEspaco(leitura, copia, index);

    cout << "valor lido -> " << leitura << endl;
    cout << "valor retornado -> " << copia << endl;

    return 0;
}
