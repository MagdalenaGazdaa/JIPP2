#include <iostream>
#include <math.h>
using namespace std;

struct punkt{
    int x;
    int y;
};

class Punkt{
public:
    punkt a, b;
    double oblicz();
    Punkt();
};

Punkt::Punkt(){
    cout << "Wprowadz wspolrzedne a: ";
    cin >> a.x >> a.y;
    cout << "Wprowadz wsporzedne b:";
    cin >> b.x >> b.y;
}

double Punkt::oblicz() {
    double wynik;
    wynik = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2) );
    return wynik;
}

int main(){
    Punkt aa;
    cout << aa.oblicz() << endl;
    return 0;
}