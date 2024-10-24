#include <iostream>
#include <set>

using namespace std;

int fatoresPrimos[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

int FATORES(int *param, int inteiro, int *contadorFatores) {
    set<int> parametros;
    int contadorParametro = 0;

    while (inteiro != 1 && *contadorFatores < 10) {
        if (inteiro % fatoresPrimos[*contadorFatores] == 0) {
            inteiro = inteiro / fatoresPrimos[*contadorFatores];

            parametros.insert(fatoresPrimos[*contadorFatores]);
            contadorParametro ++;
        } else {
            *contadorFatores = *contadorFatores + 1;
        }
    }
    

    int indexParam = 0;

    for (auto itr : parametros) {
        param[indexParam] = itr;
        indexParam++;
    }
    *contadorFatores = (int) parametros.size();

    if (inteiro == 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int vetorFatores[10], quantidadeFatores = 0, numeroLido, retorno;

    cin >> numeroLido;

    retorno = FATORES(vetorFatores, numeroLido, &quantidadeFatores);

    if (retorno == 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    for (int i = 0; i < quantidadeFatores; i++) {
        cout << "Posicao " << i + 1 << " do vetor = " << vetorFatores[i] << endl;
    }

    return 0;
}
