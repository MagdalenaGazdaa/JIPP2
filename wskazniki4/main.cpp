#include <iostream>

using namespace std;
void fun(int x, int *w){
*w=x;
}
int main() {
    int x, w;
    cout << "Podaj wartosc: " <<endl;
    cin >> x;
    fun(x,&w);
    cout <<"w = "<<w;
    return 0;
}
