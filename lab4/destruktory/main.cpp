#include <iostream>
using namespace std;

class Klasa{
public:
    int *tab;
    void pause();
    Klasa();
    ~Klasa();

};
Klasa::Klasa() {
    tab = new int [1024];
    cout << "Konstruktor wywolany" << endl;
}
void Klasa::pause(){
    system("PAUSE");
}
Klasa::~Klasa() {
    cout << "Destruktor wywolany" << endl;
    delete[] tab;
}
int main(){
    Klasa klasaa;
    klasaa.pause();
    return 0;
}