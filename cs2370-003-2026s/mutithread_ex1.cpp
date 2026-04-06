//
//  mutithread_ex1.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 4/6/26.
//
#include <iostream>
#include <thread>
using namespace std;

void func1(char c) {
    for (int i = 0; i < 200; i++)
        cout << c;
}

void func2() {
    for (int i = 0; i < 200; i++)
        cout << "B";
}

/*int main() {
    //func1();
    //func2();
    // int i = 5;
    thread worker1(func1, 'o');
    thread worker2(func2);
    thread worker3(func1, 'x');
    
    worker1.join();
    worker2.join();
    worker3.join();
    return 0;
}*/
