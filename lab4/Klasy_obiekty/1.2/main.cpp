#include <iostream>
#include <math.h>
#define M_PI 3.14159265358979323846

using namespace std;

class Kula{
    int r;
public:
    void wypelnij();
    double objetosc();
};

void Kula::wypelnij(){
    cout << "podaj promien kuli\n r = ";
    cin >> r;
}

double Kula::objetosc(){
    return 4/3.0 * M_PI * pow(r, 3);
}

int main(){
    Kula a;
    a.wypelnij();
    cout << "Objetosc kuli wynosi: " << a.objetosc();
    return 0;
}