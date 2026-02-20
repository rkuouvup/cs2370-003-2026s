//
//  TimeHrMn.h
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/18/26.
//

#ifndef TIMEHRMN_H
#define TIMEHRMN_H

class TimeHrMn {
    friend TimeHrMn operator+(int lhs, TimeHrMn rhs);
public:
    TimeHrMn(int hours = 0, int minutes = 0);
    void Print() const;
    int GetHours() const {return hours;}
    int GetMinutes() const {return minutes;}
    TimeHrMn operator+(TimeHrMn rhs);
    TimeHrMn operator+(int hrs);
    bool operator<(TimeHrMn rhs);
private:
    int hours;
    int minutes;
};

TimeHrMn operator+(int lhs, TimeHrMn rhs);

#endif
