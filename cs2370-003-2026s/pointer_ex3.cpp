//
//  pointer_ex3.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/27/26.
//
#include <iostream>
using namespace std;

class Point {
public:
    double x;
    double y;
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}
    void Print() const {cout << "(" << x << ", " << y << ")" << endl;}
};

int main() {
    int i = 10;
    cout << i << endl;
    
    int* myPtr = new int;
    cout << "*myPtr: " << *myPtr << endl;
    *myPtr = 100;
    cout << "*myPtr: " << *myPtr << endl;
    
    Point p(3.0, 4.0);
    p.x = 0.0;
    p.Print();
    
    Point* pPtr = new Point(3.0, 4.0);
    (*pPtr).x = 0.0;
    (*pPtr).Print();
    pPtr->y = 10.0;
    pPtr->Print();
    
    cout << "&i:\t\t" << &i << endl;
    cout << "&myPtr:\t" << &myPtr << endl;
    cout << "&p:\t\t" << &p << endl;
    cout << "&pPtr:\t" << &pPtr << endl;
    cout << "myPtr:\t" << myPtr << endl;
    cout << "pPtr:\t" << pPtr << endl;
    
    return 0;
}
