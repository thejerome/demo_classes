//
// Created by theje on 2018-02-22.
//

#include "interval.h"


Interval::Interval(Point &start, Point &end) : start(start), end(end) {}

Point &Interval::getStart() const {
    return start;
}
