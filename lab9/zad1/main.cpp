#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<string> li;
    string slowo;
    list<string>::iterator x;

    cout<<"Podaj ciag znakowy ktorego kazdy element chcesz zamienic na wielka litere\n";
    cin>>slowo;
    li.emplace_back(slowo);
    //Przejście po elementach listy do przodu
    for (x = li.begin(); x != li.end(); x++) {
        for (char& a : (*x))
            a = toupper(a);
    }

    cout << "Zamieniony ciag:\n";
    for (x = li.begin(); x != li.end(); ++x)
        cout << (*x) << " " << endl;

    return 0;

}