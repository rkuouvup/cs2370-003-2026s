//
//  parameters.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 1/30/26.
//
#include <iostream>
#include <vector>
using namespace std;
/*void foo(int& a) {
    a = 20;
}
void foo(string s, int i, char c) {
    s[i] = c;
}*/
/*void foo(vector<int>& v, int i, int data) {
    cout << "sizeof(v) in foo: " << sizeof(v) << endl;
    v.at(i) = data;
}*/
void foo(int a[], int i, int data) {
    cout << "sizeof(a) in foo: " << sizeof(a) << endl;
    
    a[i] = data;
}
void bar(int a[], int len) {
    for (int i = 0; i < len; i++)
        a[i] = a[i] * 10;
}

/*int main() {
    int a[] = {1, 2, 3, 4, 5, 1, 1, 1, 1, 1};
    //cout << "sizeof(a) in main: " << sizeof(a) << endl;
    //cout << "the number of elements in a is " << (sizeof(a)/sizeof(int)) << endl;
    //foo(a, 0, 100);
    bar(a, (sizeof(a)/sizeof(int)));
    for (auto e:a)
        cout << e << " ";
    cout << endl;
    //vector<int> v = {1, 2, 3, 4, 5, 1, 1, 1, 1, 1, 1};
    //cout << "sizeof(v) in main: " << sizeof(v) << endl;
    //foo(v, 0, 100);
    //for (auto e:v)
    //    cout << e << " ";
    //cout << endl;
    
    
    //int i = 10;
    //foo(i);
    //cout << i << endl;
    
    //string s = "hello";
    //foo(s, 0, 'H');
    //cout << s << endl;
    
        
    return 0;
}*/

