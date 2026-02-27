//
//  pointer_ex2.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/25/26.
//
#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int *p = &a[0];
    
    cout << "&a:\t\t" << &a << endl;
    cout << "&a[0]:\t" << &a[0] << endl;
    cout << "p:\t\t" << p << endl;
    cout << "&a[0]:\t" << &a[1] << endl;
    cout << "p+1:\t" << (p+1) << endl;
    cout << "*(p+1):\t" << *(p+1) << endl;
    cout << "a[1]:\t" << a[1] << endl;
    
    p = p+1;
    cout << "*p:\t" << *p << endl;
    //a = a+1;
    
    return 0;
}
