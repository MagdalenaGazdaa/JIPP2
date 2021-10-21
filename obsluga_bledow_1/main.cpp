#include <iostream>

using namespace std;
int podziel(int a, int b) {
    if (b == 0)
        throw "Dzielnik to zero!";
    if (a % b != 0)
        throw "Dzielenie nie odbywa sie w zborze liczb naturalnych!";
    return a / b;
}
int main() {
    int a,b;
    cout << "Podaj dwie liczby " << endl;
    cin >>a>>b;
    try {
        int c = podziel(a, b);
        cout << "a/b = " << c;
    }
    catch (const char* msg) {
        cout << msg;
    }
    cout << endl;
    return 0;
}
