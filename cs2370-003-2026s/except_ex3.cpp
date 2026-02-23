//
//  except_ex3.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/23/26.
//
#include <iostream>
#include <stdexcept>
using namespace std;

int AddPositiveIntegers(int a, int b) {
    //try {
        if (a < 0 || b < 0)
            throw invalid_argument("Must be positive arguments");
    //} catch (invalid_argument &ex) {
        cout << "Exception handled in AddPositiveIntegers" << endl;
    //}
    return a + b;
}

/*int main() {
    try {
        cout << AddPositiveIntegers(-1, 1) << endl;
    } catch (invalid_argument &ex) {
        cout << "Exception handled in main" << endl;
    }
    return 0;
}*/
