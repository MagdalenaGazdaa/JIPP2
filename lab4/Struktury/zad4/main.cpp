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

int najstarszy(samochod* tab, liczenie* liczba){
    int a =0;
    for (int i = 0; i < 5; i++){
        if (i == 0){
            a = tab[i].rok_produkcji;
        }
        else if (tab[i].rok_produkcji < a){
            a = tab[i].rok_produkcji;
        }
    }
    return a;
}
int main(){
    int liczba_modeli = 5;
    samochod model[] = {{"volvo", "s80 ", 2002, "czarny","sedan"},
                        {"ford", "fiesta", 2002, "srebny","hatchback"},
                        {"fiat", "500 ", 2019, "pudrowy","hatchback"},
                        {"vw  ", "beetle", 2018, "bialy","coupe"},
                        {"volvo","s60",2020,"czerwony","sedan"}};

    cout << "marka\tmodel\trok produkcji\tkolor\ttyp nadwozia\n";
    cout << "-----------------------------------------------------" << endl;
    for (int i = 0; i < liczba_modeli; i++){
        cout << model[i].marka << "\t" << model[i].model << "\t" << model[i].rok_produkcji << "\t\t" << model[i].kolor <<"\t\t"<<model[i].typ_nadwozia<< endl;
    }

    liczenie *liczba = new liczenie[liczba_modeli];
    int a = najstarszy(model, liczba);
    cout << "Najstarszy samochod:"<< endl;

    for (int i = 0; i < liczba_modeli; i++){
        if(model[i].rok_produkcji == a){
            cout << model[i].marka << "\t" << model[i].model << "\t" << model[i].rok_produkcji << endl;
        }
    }

    return 0;
}