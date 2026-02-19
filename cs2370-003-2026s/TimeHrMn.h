//
//  TimeHrMn.h
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/18/26.
//

#ifndef TIMEHRMN_H
#define TIMEHRMN_H

class TimeHrMn {
public:
    TimeHrMn(int hours = 0, int minutes = 0);
    void Print() const;
private:
    int hours;
    int minutes;
};


#endif
