#include "iostream"
using namespace std;

class prostopadloscian{
    int a, b, h;
public:
    void wypelnij();
    int pole();
};

void prostopadloscian::wypelnij(){
    cout << "wprowadz dane prostopadloscianu\na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "H = ";
    cin >> h;
}

int prostopadloscian::pole(){
    int pole;
    pole = 2 * (a*b + a*h + b*h);
    return pole;
}

int main(){
    prostopadloscian a;
    a.wypelnij();
    cout << "Pole wynosi: " << a.pole() ;
    return 0;
}
