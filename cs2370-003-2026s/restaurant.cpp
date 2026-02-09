//
//  restaurant.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/9/26.
//

#include <iostream>
#include "restaurant.h"
using namespace std;

void Restaurant::Print() {
    cout << name << " -- " << rating << endl;
}
void Restaurant::SetName(string name) {
    this->name = name;
}

void Restaurant::SetRating(int rating) {
    this->rating = rating;
}
string Restaurant::GetName() {
    return name;
}
int Restaurant::GetRating() {
    return rating;
}
