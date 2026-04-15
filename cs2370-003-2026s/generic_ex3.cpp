//
//  generic_ex3.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 4/13/26.
//
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

bool second_e(string s) {
    if (s[1] == 'e')
        return true;
    else
        return false;
}

bool desc(int i, int j) {
    return i > j;
}

/*int main() {
    list<string> l = {"Amy", "Betty", "Cindy", "Destiny"};
    list<string>::iterator iter;
    iter = find(l.begin(), l.end(), "Zero");
    
    if (iter != l.end())
        cout << *iter << endl;
    else
        cout << "not found" << endl;
    
    cout << "====================" << endl;
    iter = find_if(l.begin(), l.end(), second_e);
    if (iter != l.end())
        cout << *iter << endl;
    else
        cout << "not found" << endl;
    
    cout << "====================" << endl;
    
    //iter = l.begin();
    //while(iter != l.end()) {
    //    iter = find_if(iter, l.end(), second_e);
    //    if (iter != l.end())
    //        cout << *iter << endl;
    //    else
    //        cout << "not found" << endl;
    //    iter++;
    //}
    
    vector<int> v = {5, 2, 3, 8, 7};
    sort(v.begin(), v.end());
    for (auto e : v)
        cout << e << " ";
    cout << endl;
    
    cout << "====================" << endl;
    
    sort(v.begin(), v.end(), desc);
    
    for (auto e : v)
        cout << e << " ";
    cout << endl;
    
    
    return 0;
}*/
