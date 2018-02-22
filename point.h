//
// Created by theje on 2018-02-22.
//

#ifndef DEMO_CLASSES_POINT_H
#define DEMO_CLASSES_POINT_H


#include <ostream>

class Point {
    int x;
    int y;

public:
    Point(int x = 0, int y = 0);

    Point(const Point &point);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    double distance(const Point &other)const;

    static double distance(const Point &p1, const Point &p2);

    static Point center(){
        return Point();
    }

    bool operator==(const Point &rhs) const;

    bool operator!=(const Point &rhs) const;

    Point operator+(const Point &rhs) const;

    Point operator++();

    friend std::ostream &operator<<(std::ostream &os, const Point &point);
};


#endif //DEMO_CLASSES_POINT_H
