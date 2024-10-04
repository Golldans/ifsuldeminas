#include <iostream>

using namespace std;

void CALCULA(int *A, int *B, int *C) {
    int aux;
    if (*A > *B) {
        aux = *B;
        *B = *A;
        *A = aux;
    }
    
    if (*A > *C) {
        aux = *C;
        *C = *A;
        *A = aux;
    }
    
    if (*B > *C) {
        aux = *C;
        *C = *B;
        *B = aux;
    }
}

int main()
{
    int A, B, C;
    
    cin >> A >> B >> C;

    CALCULA(&A, &B, &C);
    
    cout << "A -> " << A << endl;
    cout << "B -> " << B << endl;
    cout << "C -> " << C << endl;

    return 0;
}
