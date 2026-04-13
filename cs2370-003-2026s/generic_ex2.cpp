//
//  generic_ex2.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 4/10/26.
//
#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    
    for (int i = 0; i < v.size(); i++)
        cout << v.at(i) << " ";
    cout << endl;
    
    list<int> l = {1, 2, 3, 4, 5};
    //for (int i = 0; i < l.size(); i++)
    //    cout << l.at(i) << " ";
    //cout << endl;
    list<int>::iterator iter;
    
    for (iter = l.begin();
         iter != l.end();
         iter++)
        cout << *iter << " ";
    cout << endl;
        
    
    return 0;
}
