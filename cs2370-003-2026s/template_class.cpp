//
//  template_class.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 4/3/26.
//
#include <iostream>
#include <vector>
using namespace std;

// template <typename T1, typename T2>
// template <typename K, typename V>
template <typename T>
class MyPair {
private:
    T a, b;
public:
    MyPair(T a, T b) : a(a), b(b) {}
    void Print() const {cout << "(" << a << ", " << b << ")" << endl;}
    T GetMax();
};

template<typename T>
T MyPair<T>::GetMax() {
    T result;
    if (a >= b)
        result = a;
    else
        result = b;
    return result;
}


/*int main() {
    
    int i = 5;
    vector<int> v;
    
    MyPair<int> p1(3, 5);
    p1.Print();
    
    cout << "The maximum value is " << p1.GetMax() << endl;
    
    MyPair<string> p2("hello", "world");
    p2.Print();
    cout << "The maximum value is " << p2.GetMax() << endl;
    
    
    
    return 0;
}*/
