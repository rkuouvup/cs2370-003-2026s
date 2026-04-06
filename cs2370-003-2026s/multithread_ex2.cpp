//
//  multithread_ex2.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 4/6/26.
//
#include <iostream>
#include <thread>
using namespace std;

void f(const string &s) {
    for (int i = 0; i < 10; i++) {
        for (char c:s)
            cout << c;
        cout << endl;
    }
}

int main() {
    thread t1(f, "It's a Dessert Toopping");
    thread t2(f, "It's a Floor Wax");
    t1.join();
    t2.join();
    
    return 0;
}
