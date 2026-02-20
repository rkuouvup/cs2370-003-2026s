//
//  TimeHrMn.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/18/26.
//
#include <iostream>
#include "TimeHrMn.h"
using namespace std;

TimeHrMn::TimeHrMn(int hours, int minutes) {
    int carry = 0;
    if (minutes < 0) {
        this->minutes = 0;
    } else if (minutes >= 0 && minutes < 60) {
        this->minutes = minutes;
    } else {
        this->minutes = minutes % 60;
        carry = minutes / 60;
    }
    this->hours = hours + carry;
}

void TimeHrMn::Print() const {
    cout << hours << ":" << minutes << endl;
}

TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
    TimeHrMn total(this->hours + rhs.hours,
                   this->minutes + rhs.minutes);
    return total;
}

TimeHrMn TimeHrMn::operator+(int hrs) {
    TimeHrMn total(this->hours + hrs,
                   this->minutes);
    return total;
}

bool TimeHrMn::operator<(TimeHrMn rhs) {
    if (this->hours < rhs.hours) {
        return true;
    } else if (this->hours > rhs.hours) {
        return false;
    } else {
        if (this->minutes < rhs.minutes)
            return true;
        else
            return false;
    }
}

TimeHrMn operator+(int lhs, TimeHrMn rhs) {
    //TimeHrMn total(lhs + rhs.GetHours(),
    //               rhs.GetMinutes());
    TimeHrMn total(lhs + rhs.hours,
                   rhs.minutes);
    return total;
}
