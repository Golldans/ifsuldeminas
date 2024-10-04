#include <iostream>

using namespace std;

void CALCULA(int *X, int *Y) {
    int auxX = *X, auxY = *Y;
    
    *X = auxX + auxY;
    *Y = auxX - auxY;
}

int main()
{
    int X, Y;
    
    cin >> X >> Y;
    
    CALCULA(&X, &Y);
    
    cout << "X -> " << X << endl;
    cout << "Y -> " << Y << endl;
    
    return 0;
}
