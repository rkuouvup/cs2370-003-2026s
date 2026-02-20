//
//  TimeHrMnTest.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/18/26.
//
#include <iostream>
#include "TimeHrMn.h"
using namespace std;

int main() {
    TimeHrMn t1(2, 40);
    TimeHrMn t2(3, 40);
    t1.Print();
    t2.Print();
    //cout << (t1 < t2) << endl;
    //cout << (t2 < t1) << endl;
    TimeHrMn t3 = t1 + t2;
    // t1.operator+(t2);
    t3.Print();
    TimeHrMn t4 = t1 + 5;
    // t1.operator+(5);
    t4.Print();
    TimeHrMn t5 = 5 + t1;
    // operator+(5, t1)
    t5.Print();
    return 0;
}
