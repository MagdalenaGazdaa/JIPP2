#include <iostream>

using namespace std;

int konwertuj(const char* tab) {
    int a = 0;
    for (int i = 0; tab[i]; i++) {
        if (a * 10 < 0)
            throw "Wprowadzona liczba jest za duza";
        if (tab[i] >= '0' && tab[i] <= '9')
            a = a * 10 + tab[i] - '0';
        else
            throw "Wprowadzony ciag zawiera nieprawidlowe znaki";
    }
    return a;
}

int main() {
    char* tab = new char[32];
    cin.getline(tab, 32);
    try {
        cout << konwertuj(tab);
    }
    catch (const char* msg) {
        cout << msg;
    }
    return 0;
}
