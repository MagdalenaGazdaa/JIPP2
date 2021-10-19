#include <iostream>
using namespace std;
int pole(int a, int b);
int pole(int a);

int main() {

    cout<<"POle kwadratu o boku 5: "<<pole(5)<<endl;
    cout<<"Pole prostokatu o bokach 2, 3: "<<pole(2,3);


    return 0;
}
int pole(int a, int b){
    return a*b;

}
int pole(int a){
    return a*a;
}