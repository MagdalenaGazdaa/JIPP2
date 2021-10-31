#include <iostream>
using namespace std;
struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    string typ_nadwozia;
};
struct liczenie{
    string marka;
    int liczba;
};

int liczenie_samochodow(samochod *tab, liczenie *liczba){
    int a = 0;
    bool b = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(tab[i].marka == liczba[j].marka){
                liczba[j].liczba++;
                b = 1;
            }
        }
        if(b == 0){
            liczba[a].liczba = 1;
            liczba[a].marka = tab[i].marka;
            a++;
        }
        b = 0;
    }
    for(int i = 0; i < a; i++){
        cout <<"jest "<<liczba[i].liczba<<" "<<liczba[i].marka <<endl;
    }
    return 0;
}

int main(){
    int liczba_modeli = 5;
    samochod model[] = {{"volvo", "s80 ", 2002, "czarny","sedan"},
                        {"ford", "fiesta", 2005, "srebny","hatchback"},
                        {"fiat", "500 ", 2019, "pudrowy","hatchback"},
                        {"vw  ", "beetle", 2018, "bialy","coupe"},
                        {"volvo","s60",2020,"czerwony","sedan"}};

    cout << "marka\tmodel\trok produkcji\tkolor\ttyp nadwozia\n";
    cout << "-----------------------------------------------------" << endl;
    for (int i = 0; i < liczba_modeli; i++){
        cout << model[i].marka << "\t" << model[i].model << "\t" << model[i].rok_produkcji << "\t\t" << model[i].kolor <<"\t\t"<<model[i].typ_nadwozia<< endl;
    }

    liczenie *liczba = new liczenie[liczba_modeli];
    cout << liczenie_samochodow(model, liczba) << endl;

    return 0;
}