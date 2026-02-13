//
//  favorite.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 2/9/26.
//

#include <iostream>
#include "restaurant.h"
using namespace std;




int main() {
    //int i = 0;
    cout << Restaurant::GetNextId() << endl;
    
    Restaurant r1;
    Restaurant r2("Tucanos", 5);
    
    r1.SetName("Chili's");
    //Restaurant::SetName(r1, "Chili's");
    r1.SetRating(4);
    //r2.SetName("Tucanos");
    //r2.SetRating(5);
    
    r1.Print();
    r2.Print();
    cout << r1.GetNextId() << endl;
    
    //cout << r1.name << endl;
    
    return 0;
}
