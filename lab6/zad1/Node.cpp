//
// Created by student on 16.11.21.
//

#include "Node.h"
using namespace std;

Node::Node() {
    x = 0;
    y = 0;
    updateValue(x, y);
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}

double pointsDistance( Node a, Node b ){
    return(sqrt((a.x-a.y)*(a.x-a.y)+(b.x-b.y)*(b.x-b.y)));

}
