#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int max(int tab[],int n){
    int x=0;
    for(int i=0; i<n;i++){
        if(x<tab[i]) x=tab[i];
    }

    return x;
}

int main() {
    int rozmiar;

    cout << "Podaj rozmiar tablicy:" << endl;
    cin >> rozmiar;
    int * tablica = new int[rozmiar];
    srand(time(NULL));
    for(int i=0;i<rozmiar;i++)
    tablica[i]=(rand()%100)+61;

    for(int i=0; i<rozmiar;i++){
        cout <<" "<<tablica[i];
    }

    cout<<endl<<"wartosc MAX to: "<<max(tablica,rozmiar);



    delete [] tablica;
    return 0;
}