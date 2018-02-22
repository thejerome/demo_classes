//
// Created by theje on 2018-02-22.
//

#ifndef DEMO_CLASSES_INTERVAL_H
#define DEMO_CLASSES_INTERVAL_H


#include "point.h"

class Interval {
    Point &start;
    Point &end;

public:

    Interval(Point &start, Point &end);

    Point &getStart() const;

};


#endif //DEMO_CLASSES_INTERVAL_H
