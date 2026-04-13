//
//  multithread_ex3.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 4/8/26.
//
#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

mutex mtx1;
mutex mtx2;

void john() {
    for (int i = 0; i < 3; i++) {
        lock(mtx1, mtx2);
        //lock_guard<mutex> lock1(mtx1);
        lock_guard<mutex> lock1(mtx1, adopt_lock);
        this_thread::sleep_for(chrono::milliseconds(300));
        //lock_guard<mutex> lock2(mtx2);
        lock_guard<mutex> lock2(mtx2, adopt_lock);
        cout << "John has the locks" << endl;
    }
}

void jane() {
    for (int i = 0; i < 3; i++) {
        lock(mtx1, mtx2);
        //lock_guard<mutex> lock1(mtx1);
        lock_guard<mutex> lock2(mtx2, adopt_lock);
        this_thread::sleep_for(chrono::milliseconds(300));
        //lock_guard<mutex> lock2(mtx2);
        lock_guard<mutex> lock1(mtx1, adopt_lock);
        cout << "Jane has the locks" << endl;
    }
}


/*int main() {
    thread t1(john);
    thread t2(jane);
    
    t1.join();
    t2.join();
    
    return 0;
}*/
