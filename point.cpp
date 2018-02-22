//
// Created by theje on 2018-02-22.
//
#include "iostream"
#include "point.h"
#include "cmath"

using namespace std;

Point::Point(int x, int y) : x(x), y(y) {
    cout << " in constructor" << endl;
}

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}

Point::Point(const Point &point) : x(point.x), y(point.y){
    cout << " in copy constructor" << endl;
}

double Point::distance(const Point &other) const {
    return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
}

double Point::distance(const Point &p1, const Point &p2) {
    return p1.distance(p2);
}

bool Point::operator==(const Point &rhs) const {
    return x == rhs.x &&
           y == rhs.y;
}

bool Point::operator!=(const Point &rhs) const {
    return !(rhs == *this);
}

Point Point::operator+(const Point &rhs) const {
    return Point(x + rhs.x, y + rhs.y);
}

Point Point::operator++(){
    return Point(x + 1, y + 1);
}

ostream &operator<<(ostream &os, const Point &point) {
    os << "x: " << point.x << " y: " << point.y;
    return os;
}






