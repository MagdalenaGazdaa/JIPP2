#include <iostream>
using namespace std;

void zamien(int tab[], int n){
    int temp;
    for(int i=0;i<n/2;i++) {
        temp=tab[n-i-1];
        tab[n-i-1]=tab[i];
        tab[i]=temp;
    }

}

int main() {
    int rozmiar;
    cout <<"podaj ilosc elementow w tablicy ";
    cin >>rozmiar;
    int * tab = new int[rozmiar];
    cout << "\nPoczatowy stan tablicy: \n";
    for(int i=0;i<rozmiar;i++) {
        tab[i] = (rand() % 100) ;
        cout<<tab[i]<<" ";
    }

    cout << "\nPo zamianie: \n";
    zamien(tab,rozmiar);

    for(int i=0;i<rozmiar;i++)
        cout<<tab[i]<<" ";
    delete [] tab;
    return 0;
}

