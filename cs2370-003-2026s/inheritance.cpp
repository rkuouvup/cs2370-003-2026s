//
//  inheritance.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 3/20/26.
//

#include <iostream>
using namespace std;

class Business {
public:
    void SetName(string name) {this->name = name;}
    void SetAddress(string address) {this->address = address;}
    string GetDescription() const {
        return name + " -- " + address;
    }
protected:
    string name;
    string address;
};

class Restaurant : public Business {
public:
    void SetRating(int rating) {this->rating = rating;}
    int GetRating() const {return rating;}
    void DisplayRestaurant() const {
        cout << name << "--" << address << "--" << rating << endl;
    }
private:
    int rating;
};





int main() {
    Business b1;
    Restaurant r1;
    
    
    b1.SetName("IEEE");
    b1.SetAddress("New Jersey");
    
    r1.SetName("Burger King");
    r1.SetAddress("University Parkway");
    r1.DisplayRestaurant();
    
    cout << b1.GetDescription() << endl;
    //cout << r1.GetDescription() << endl;
    
    
    
    return 0;
}
