//
//  control_flow_foreach.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 1/14/26.
//
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s = "HeLlO";
    int counter = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (isupper(s.at(i))) {
            counter++;
        }
    }
    
    cout << "The number of uppercase letter in s is " << counter << endl;
    
    counter = 0;
    for (char c : s) {
        if (isupper(c)) {
            counter++;
        }
    }
    cout << "The number of uppercase letter in s is " << counter << endl;
    
    /*for (int i = 0; i < s.size(); i++) {
        s.at(i) = toupper(s.at(i));
    }
    cout << s << endl;*/
    return 0;
}
