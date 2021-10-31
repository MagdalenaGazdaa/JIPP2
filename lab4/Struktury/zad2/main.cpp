#include <iostream>
using namespace std;
struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
    string typ_nadwozia;
};

int main(){
    int liczba_modeli = 4;
    samochod model[] = {{"volvo", "s80 ", 2002, "czarny","sedan"},
                        {"ford", "fiesta", 2005, "srebny","hatchback"},
                        {"fiat", "500 ", 2019, "pudrowy","hatchback"},
                        {"vw  ", "beetle", 2018, "bialy","coupe"}};

    cout << "marka\tmodel\trok produkcji\tkolor\ttyp nadwozia\n";
    cout << "-----------------------------------------------------" << endl;
    for (int i = 0; i < liczba_modeli; i++){
        cout << model[i].marka << "\t" << model[i].model << "\t" << model[i].rok_produkcji << "\t\t" << model[i].kolor <<"\t\t"<<model[i].typ_nadwozia<< endl;
    }
    return 0;
}