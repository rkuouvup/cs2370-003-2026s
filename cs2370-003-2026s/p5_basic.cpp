//
//  p5_basic.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 3/27/26.
//
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class GFG {
public:
    float x, y;
    GFG(float x=0, float y=0) : x(x), y(y) {cout << "Constructor: " << x << " " << y << endl;}
    GFG(const GFG& GFG) : x(GFG.x), y(GFG.y) {cout << "Copied: " << x << " " << y << endl;}
    ~GFG() {cout << "Destructor: " << x << " " << y << endl; }
};


int main() {
    //vector<GFG> v;
    list<GFG> v;
    //v.reserve(4);
    
    int c = 0;
    for (int i = 0; i < 4; i++) {
        cout << "====== " << i << " ========" << endl;
        //v.push_back(GFG(c+1, c+2));
        v.emplace_back(c+1, c+2);
        c+=3;
    }
    cout << "=======================" << endl;
    
    return 0;
}
