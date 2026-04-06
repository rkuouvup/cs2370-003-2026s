//
//  template_func.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 4/1/26.
//
#include <iostream>
using namespace std;

template <typename T>
T TripleMin(T item1, T item2, T item3) {
    T m = item1;
    
    if (item2 < m)
        m = item2;
    if (item3 < m)
        m = item3;
    return m;
}

/*int main() {
    int num1 = 4, num2 = 1, num3 = 5;
    string str1 = "zzz", str2 = "aaa", str3 = "mmm";
    
    int minInt = TripleMin(num1, num2, num3);
    cout << "The minimal number is: " << minInt << endl;
    
    string minStr = TripleMin(str1, str2, str3);
    cout << "The minimal string is: " << minStr << endl;
    
    
    return 0;
}*/
