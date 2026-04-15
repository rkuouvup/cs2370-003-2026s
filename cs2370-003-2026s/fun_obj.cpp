//
//  fun_obj.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 4/15/26.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool gt3(int n) {
    return n > 3;
}

struct gt_n {
    int key;
    gt_n(int key=0) : key(key) {}
    
    //gt_n operator+(gt_n other);
    //bool operator==(gt_n other);
    
    bool operator()(int n) {
        return n > key;
    }
};


int main() {
    // TimeHrMin t1;
    // TimeHrMin t2;
    // t1 == t2; ==> t1.operator==(t2)
    gt_n foo = gt_n(3);
    // foo() ==> foo.operator()
    
    vector<int> v = {5, 3, 7, 9, 8, 2, 3, 6};
    
    cout << "====== Example of using function object ======" << endl;
    
    auto iter = v.begin();
    //while((iter = find_if(iter, v.end(), foo)) != v.end())
    while((iter = find_if(iter, v.end(), gt_n(3))) != v.end())
        cout << *iter++ << " ";
    cout << endl;
    
    iter = v.begin();
    while((iter = find_if(iter, v.end(), gt_n(6))) != v.end())
        cout << *iter++ << " ";
    cout << endl;
    
    cout << "====== Example of using lambda expression ======" << endl;
    
    iter = v.begin();
    
    //[](parameters) {};
    //auto gt_5 = [](int n) {return n > 5;};
    //while((iter = find_if(iter, v.end(), gt_5)) != v.end())
    
    int key;
    cout << "Please enter the key: ";
    cin >> key;
    while((iter = find_if(iter, v.end(), [key](int n) {return n > key;})) != v.end())
        cout << *iter++ << " ";
    cout << endl;
    
    return 0;
}
