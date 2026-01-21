//
//  cstring_ex.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 1/21/26.
//

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string a1;
    a1 = "UVU";
    char c1[] = {'U', 'V', 'U'};
    char c2[] = "UVU";
    
    //cout << "sizeof a1: " << sizeof(a1) << endl;
    //cout << "sizeof c1: " << sizeof(c1) << endl;
    //cout << "sizeof c2: " << sizeof(c2) << endl;
    
    char s1[10] = "UvU";
    char s2[10] = "UVU";
    
    //if (s1 == s2)
    //    cout << "Same data" << endl;
    //else
    //    cout << "Different data" << endl;
    cout << "Compare s1 and s2: " << strcmp(s1, s2) << endl;
    
    return 0;
}
