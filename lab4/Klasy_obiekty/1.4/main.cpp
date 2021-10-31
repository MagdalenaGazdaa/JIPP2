#include <iostream>
using namespace std;

class student
{
    string imie;
    string nazwisko;
    int numer_albumu;
    int liczba_pytan;
    int liczba_odpowiedzi;
public:
    void wypelnij();
    int procent();
};

void student::wypelnij(){
    cout << "podaj imie ";
    cin >> imie;
    cout <<"podaj nazwisko ";
    cin >>nazwisko;
    cout <<"podaj numer albumu ";
    cin>>numer_albumu;
    cout <<"podaj liczbe pytan ";
    cin>>liczba_pytan;
    cout <<"podaj liczbe poprawnych odpowiedzi ";
    cin>>liczba_odpowiedzi;
}
int student::procent() {
return liczba_odpowiedzi*100/liczba_pytan;
}

int main(){
    student student1;
    student1.wypelnij();
    cout << "wynik w %: "<<student1.procent();
    return 0;
}