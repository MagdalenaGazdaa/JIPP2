#include <iostream>

using namespace std;

void fun(int *a, int *tab) {
    cout << "podaj elementy tablicy, (7 dodatnich zostanie wpisanych): ";
    for (int i = 0; i < 7; i++) {
        cin >> *a;
        if(*a<=0){
            i--;
            continue;
        }
        tab[i]=*a;
    }
}

int main() {
    int tab[7];
    int a=0;
    fun(&a, tab);
    cout<<endl<<"tablica: "<<endl;
    for(int i=0;i<7;i++){
        cout <<"\t"<<tab[i];
    }

    return 0;
}
