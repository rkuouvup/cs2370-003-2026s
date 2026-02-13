//
//  restaurant.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/9/26.
//

#include <iostream>
#include "restaurant.h"
using namespace std;

int Restaurant::nextId = 101;

int Restaurant::GetNextId() {
    return nextId;
}

/*int Restaurant::GetId() {
    return id;
}*/

//Restaurant::Restaurant() : name("No Name"), rating(-1), id(nextId) {
    /*name = "No Name";
    rating = -1;
    id = rand();*/
//    nextId++;
//}

Restaurant::Restaurant(string name, int rating) :
            name(name), rating(rating), id(nextId){
                nextId++;
}

void Restaurant::Print() const {
    //rating = 10;
    cout << id << ": " << name << " -- " << rating << endl;
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
