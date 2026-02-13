//
//  restaurant.h
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/9/26.
//
#ifndef RESTAURANT_H
#define RESTAURANT_H
using namespace std;


class Restaurant {
private:
    string name;
    int rating;
    static int nextId;
    const int id;
public:
    //Restaurant();
    Restaurant(string name="No Name", int rating=-1);
    void Print() const;
    void SetName(string myName);
    void SetRating(int myRating);
    string GetName();
    int GetRating();
    static int GetNextId();
    //static int GetId();
};

#endif
