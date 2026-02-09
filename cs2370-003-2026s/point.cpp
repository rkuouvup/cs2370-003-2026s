//
//  point.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/9/26.
//
#include <cmath>
#include "point.h"

double distance(Point& p, Point& q) {
    return sqrt(pow(p.x - q.x, 2) + pow(p.y - q.y, 2));
}
