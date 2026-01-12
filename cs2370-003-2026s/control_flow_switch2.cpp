//
//  control_flow_switch2.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 1/12/26.
//

#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter the grade (1 to 4): ";
    cin >> grade;
    
    
    switch(grade) {
        case 'A':
        case 'a': cout << "Excellent" << endl;
            break;
        case 'B':
        case 'b': cout << "Good" << endl;
            break;
        case 'C':
        case 'c': cout << "Fair" << endl;
            break;
        case 'D':
        case 'd': cout << "Poor" << endl;
            break;
        default: cout << "Incorrect Input" << endl;
    }
    return 0;
}
