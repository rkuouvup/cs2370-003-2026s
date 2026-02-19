//
//  TimeHrMn.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/18/26.
//
#include <iostream>
#include "TimeHrMn.h"
using namespace std;

TimeHrMn::TimeHrMn(int hours, int minutes) : hours(hours), minutes(minutes) {
    
}

void TimeHrMn::Print() const {
    cout << hours << ":" << minutes << endl;
}
