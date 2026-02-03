//
//  static_ex.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/2/26.
//
#include <iostream>
using namespace std;

void f1() {
    int i = 0;
    i++;
    cout << i << endl;
}

void f2() {
    static int i = 0;
    i++;
    cout << i << endl;
}

/*int main() {
    //f1();
    //f1();
    //f1();
    f2();
    f2();
    f2();
    return 0;
}*/
