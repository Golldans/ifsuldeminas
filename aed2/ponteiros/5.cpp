#include <iostream>

using namespace std;

long long maximoInteiro = 2147483647;

int comparaNumeros(long long numeroUm, long long numeroDois, long long *soma, long long *produto) {
    *(produto) = numeroUm * numeroDois;
    *(soma) = numeroUm + numeroDois;
    
    if (*(produto) > maximoInteiro || *(soma) > maximoInteiro) {
        return -1;
    }
    
    if (numeroUm == numeroDois) {
        return 1;
    }
    
    return 0;
}

int main()
{
    long long numeroUm, numeroDois, soma, produto;
    
    cin >> numeroUm >> numeroDois;
    
    cout << comparaNumeros(numeroUm, numeroDois, &soma, &produto) << endl;
    cout << "soma = " << soma << endl;
    cout << "produto = " << produto << endl;
    
    return 0;
}
