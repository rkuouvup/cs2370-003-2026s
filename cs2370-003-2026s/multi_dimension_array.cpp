//
//  multi_dimension_array.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 1/23/26.
//

#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    //for (int i = 0; i < 2; i++)
    //    for (int j = 0; j < 3; j++)
    //        cout << a[i][j] << endl;
    for (auto& r : a)
        for (auto& e : r)
            e = e * 10;
    
    for (auto& r : a)
        for (auto e : r)
            cout << e << endl;

    return 0;
}
