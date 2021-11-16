#include <iostream>
#include <math.h>
#include "Node.h"
#include "Node.cpp"
using namespace std;


int main() {

    Node a(5,2);
    Node b(9,5);
    cout << pointsDistance(  a,  b );
    return 0;
}