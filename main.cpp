#include <iostream>
#include "point.h"
#include "interval.h"

using namespace std;

int main() {
    Point p = Point(1,2);

    cout << p.getX() << ";" << p.getY() << endl;

    Point def = Point();

    cout << def.getX() << ";" << def.getY() << endl;

    Point points[3];

    Point &p_copy = p;

    cout << "p: " << p.getX() << ";" << p.getY() << endl;
    cout << "p_copy: " << p_copy.getX() << ";" << p_copy.getY() << endl;

    p.setX(-8);

    cout << "p: " << p.getX() << ";" << p.getY() << endl;
    cout << "p_copy: " << p_copy.getX() << ";" << p_copy.getY() << endl;


    Point p1 = Point();
    Point p2 = Point(0,2);
    Point p3 = Point(2,0);
    Point p4 = Point(-3,-4);

    cout << p1.distance(p2) << endl;
    cout << p1.distance(p3) << endl;
    cout << p1.distance(p4) << endl;

    cout << Point::distance(p2, p4) << endl;

    const Point &center = Point::center();

    cout << center.getX() << ";" << center.getY()<< endl;

    cout << (p1 == p2) << endl;
    cout << (p1 != p2) << endl;


    const Point &p34 = p3 + p4;

    cout << p34 << endl;

    Interval i = Interval(p1, p2);
    p1.setX(67);

    cout << i.getStart() << endl;


    return 0;
}