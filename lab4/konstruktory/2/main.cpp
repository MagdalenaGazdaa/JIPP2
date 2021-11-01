#include <iostream>
using namespace std;

struct punkt{
    int x;
    int y;
};

class Figura{
public:
    int ilosc_wierzcholkow;
    punkt *wierzcholki;
    Figura(int ilosc);
};
Figura::Figura(int ilosc) {
    wierzcholki = new punkt[ilosc];

    for (int i = 1; i <= ilosc; i++){
        cout << "Podaj wspolrzedne "<<i<<" wierzcholka: " << endl;
        cin >> wierzcholki[i].x >> wierzcholki[i].y;
    }
}
int main(){
    int ilosc;
    cout << "podaj ilosc wierzcholkow figury: ";
    cin >> ilosc;
    Figura obiekt(ilosc);
    return 0;
}