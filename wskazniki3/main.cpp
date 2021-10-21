#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int tmp=*a;
    *a=*b;
    *b=tmp;
    }

void sort(int*x,int*y,int*z){
    if (*x>*y) swap(x,y);
    if (*y>*z) swap(y,z);
    if (*x>*y) swap(x,y);
}

int main() {
    int a,b,c;
    cout<<"podaj 3 liczby: ";
    cin >> a >> b >> c;
    sort(&a,&b,&c);

    cout << a << " " << b << " " << c << endl;

    return 0;

}
