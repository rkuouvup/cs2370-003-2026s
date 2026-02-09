//
//  point.h
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/9/26.
//
#ifndef POINT_H
#define POINT_H


struct Point {
    double x;
    double y;
};

struct Line {
    Point start;
    Point end;
};

double distance(Point& p, Point& q);


#endif
