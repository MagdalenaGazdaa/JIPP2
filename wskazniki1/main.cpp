#include <iostream>
using namespace std;

void srednia(double *a,double *b,double *c){
     *c= (*a+*b)/2;
}


int main()
{
    double a, b;
    cout<<"podaj dwie liczby: ";
    cin >>a >>b;
    double *wsk_a = &a;
    double *wsk_b = &b;
    double c=1;
    double *wsk_c=&c;
    srednia(wsk_a,wsk_b,wsk_c);
    cout <<"srednia: "<<c;
    return 0;
}
