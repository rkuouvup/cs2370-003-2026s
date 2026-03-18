//
//  file_reading.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 3/16/26.
//
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFS;
    string s;
    
    inFS.open("myfile.txt");
    if (!inFS.is_open()) {
        cout << "unable to open the file" << endl;
        return 1;
    }
    
    inFS >> s;
    while(!inFS.fail()) {
        cout << "data: " << s << endl;
        inFS >> s;
    }
    
    inFS.close();
    return 0;
}
