#include <iostream>

using namespace std;

int DIVS(int valorN, int *min, int *max) {
    for (int i = 2; i <= valorN - 1; i++) {
        if (valorN % i == 0) {
            *(max) = i;
        }
    }
    
    for (int i = valorN - 1; i >= 2; i--) {
        if (valorN % i == 0) {
            *(min) = i;
        }
    }
    
    if (*min != 0 && *max != 0) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int numero, minimo = 0, maximo = 0, resultado;
    
    cin >> numero;
    
    resultado = DIVS(numero, &minimo, &maximo);
    
    cout << "resultado -> " << resultado << endl;
    cout << "minimo -> " << minimo << endl;
    cout << "maximo -> " << maximo << endl;

    return 0;
}
