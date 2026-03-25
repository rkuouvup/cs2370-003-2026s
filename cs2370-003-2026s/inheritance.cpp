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
    string GetName() const {return name;}
    virtual string GetDescription() const {
        return name + " -- " + address;
    }
    virtual string GetHours() const = 0;
protected:
    string name;
    string address;
};

class Restaurant : public Business {
public:
    void SetRating(int rating) {this->rating = rating;}
    int GetRating() const {return rating;}
    void DisplayRestaurant() const {
        cout << GetName() << "--" << address << "--" << rating << endl;
    }
    string GetDescription() const override {
        return Business::GetDescription() + "\n\tRating: " + to_string(rating);
    }
    
    string GetHours() const override {
        return "8 AM to 5 PM";
    }
    
private:
    int rating;
};



void DriveTo(Business* busPtr) {
    cout << "Drive to " << busPtr->GetDescription() << endl;
}

void foo(int* a) {
    cout << *a << endl;
}


int main() {
    //int i = 10;
    //double d = 25.8;
    //foo(&d);
    
    
    //Business b1;
    Restaurant r1;
    
    //b1.SetName("IEEE");
    //b1.SetAddress("New Jersey");
    
    //r1.SetName("Burger King");
    //r1.SetAddress("University Parkway");
    //r1.SetRating(3);
    
    //DriveTo(&r1);
    //DriveTo(&b1);
    
    //b1.GetDescription();
    //r1.GetDescription();
    
    //r1.DisplayRestaurant();
    
    //cout << b1.GetDescription() << endl;
    //cout << r1.GetDescription() << endl;
    
    
    
    return 0;
}
