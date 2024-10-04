#include <iostream>
#include <cstring>

using namespace std;


int main() {
    int a = 1, b = 2, c = 3, d = 4;
    float e = 5, f = 6, g = 7, h = 8;
    char v[10];
    
    
    int *ponteiro = &a;
    
    cout << ponteiro << endl;
    
    
    for (int i = 0; i < 20; i++) {
        ++(ponteiro);
        
        cout << "O ponteiro está com o valor de -> " << *ponteiro << endl;
        if (ponteiro == &b) {
            cout << "O valor concide com B!!" << endl;
        } else if (ponteiro == &c) {
            cout << "O valor concide com C!!" << endl;
        } else if (ponteiro == &d) {
            cout << "O valor concide com D!!" << endl;
        } else if ((float*)ponteiro == &e) {
            cout << "O valor concide com E!!" << endl;
        } else if ((float*)ponteiro == &f) {
            cout << "O valor concide com F!!" << endl;
        } else if ((float*)ponteiro == &g) {
            cout << "O valor concide com G!!" << endl;
        } else if ((float*)ponteiro == &h) {
            cout << "O valor concide com H!!" << endl;
        } else if ((char*)ponteiro == (char*)v) {
            cout << "O valor concide com V!!" << endl;
        }
    }
    
    cout << *ponteiro;
    
    
    return 0;
}
