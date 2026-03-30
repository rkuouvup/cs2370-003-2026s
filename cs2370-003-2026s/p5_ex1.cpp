//
//  p5_ex1.cpp
//  cs2370-003-2026s
//
//  Created by Rita Kuo on 3/30/26.
//
#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() = default;
    virtual Shape* clone() const = 0;
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double width=0, double height=0) : width(width), height(height) {}
    double area() override {return width * height;}
    Shape* clone() const override {return new Rectangle(*this);}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double radius=0) : radius(radius) {}
    double area() override {return 3.14 * radius * radius;}
    Shape* clone() const override {return new Circle(*this);}
};

class Badge {
private:
    string name;
    string color;
    Shape *shape;
public:
    Badge(string name="no name", string color="no color", Shape *shape=nullptr) : name(name), color(color), shape(shape) {
        
    }
    
    Badge(const Badge &other) {
        this->name = other.name;
        this->color = other.color;
        this->shape = other.shape->clone();
    }
    
    ~Badge() {
        delete shape;
    }
    void PrintInfo() const {
        cout << "Badge: " << name << " (" << color << ", " << shape->area() << ")" << endl;
    }
};


int main() {
    list<Badge> badge_list;
    vector<vector<string>> info;
    info.push_back({"Beginner", "Green", "Rectangle"});
    info.push_back({"Level 10", "Brozen", "Circle"});
    info.push_back({"Level 50", "Silver", "Circle"});
    info.push_back({"Professional", "Green", "Rectangle"});
    info.push_back({"Gatherer", "Orange", "Rectangle"});

        // Add Badges instances in the badge_list with emplace_back method
    
    for (int i = 0; i < info.size(); i++) {
        if (info.at(i).at(2) == "Rectangle") {
            //Shape *s = new Rectangle(3, 3);
            //Badge b(info.at(i).at(0), info.at(i).at(1), s);
            //      equivalent to the next statement
            //Badge b(info.at(i).at(0), info.at(i).at(1), new Rectangle(3, 3));
            //badge_list.emplace_back(info.at(i).at(0), info.at(i).at(1), new Rectangle(3, 3));
            badge_list.push_back(Badge(info.at(i).at(0), info.at(i).at(1), new Rectangle(3, 3)));
            
            //badge_list.push_back(b);
            
        } else if (info.at(i).at(2) == "Circle") {
            badge_list.emplace_back(info.at(i).at(0), info.at(i).at(1), new Circle(3));
        }
    }
    

    for (auto& e : badge_list)
        // Print the name, color and the size(call area()) of the badge
        e.PrintInfo();

    return 0;
}

