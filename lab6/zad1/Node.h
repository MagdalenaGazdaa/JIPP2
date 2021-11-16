//
// Created by student on 16.11.21.
//

#ifndef ZAD1_NODE_H
#define ZAD1_NODE_H
#include <iostream>
#include <math.h>
class Node {
    friend double pointsDistance( Node a, Node b );
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

};
#endif //ZAD1_NODE_H
