#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int liczby_los(int tab[]){
    srand(time(NULL));
    return(rand()%(tab[0]-tab[1]+1))+tab[0];
}

int main() {
    int przedzial[22];

    cout << "POdaj przedzial: " ;
    cin >>przedzial[0];
    cin >>przedzial[1];
    cout <<" Wyloswoana liczba to: "<<liczby_los(przedzial);
    return 0;
}