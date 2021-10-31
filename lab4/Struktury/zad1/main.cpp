#include <iostream>
using namespace std;
struct samochod{
    string marka;
    string model;
    int rok_produkcji;
    string kolor;
};

int main(){
    int liczba_modeli = 4;
    samochod model[] = {{"volvo", "s80 ", 2002, "czarny"},
                        {"ford", "fiesta", 2005, "srebny"},
                        {"fiat", "500 ", 2019, "pudrowy"},
                        {"vw  ", "beetle", 2018, "bialy"}};

    cout << "marka\tmodel\trok produkcji\tkolor\n";
    cout << "----------------------------------------" << endl;
    for (int i = 0; i < liczba_modeli; i++){
        cout << model[i].marka << "\t" << model[i].model << "\t" << model[i].rok_produkcji << "\t\t" << model[i].kolor << endl;
    }
    return 0;
}