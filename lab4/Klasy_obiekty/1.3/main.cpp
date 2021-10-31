#include <iostream>

using namespace std;

class FunkcjaKwadratowa
{
    float a, b, c;
public:
    void wypelnij();
    void wypisz();
};

void FunkcjaKwadratowa::wypelnij(){
    cout << "podaj parametry \n a = ";
    cin >> a;
    cout <<"b = ";
    cin >>b;
    cout <<"c = ";
    cin>>c;
}
void FunkcjaKwadratowa::wypisz() {
    cout<<"\nf(x)="<<a<<"x^2+"<<b<<"x+"<<c;
}

int main(){
    FunkcjaKwadratowa aa;
    aa.wypelnij();
    cout << "Objetosc kuli wynosi: ";
    aa.wypisz();
    return 0;
}